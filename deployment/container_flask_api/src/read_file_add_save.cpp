#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

#include <tclap/CmdLine.h>
#include <util.h>

//Azure includes
#include "storage_credential.h"
#include "storage_account.h"
#include "blob/blob_client.h"

using namespace std;

int main(int argc, char* argv[])
{
    TCLAP::CmdLine cmd("Azure I/O", ' ', "0.1b");
    TCLAP::ValueArg<std::string> containerArg("c","container","Container with file",true,"RandomContainer","string",cmd);
    TCLAP::ValueArg<std::string> blobArg("b","blob","Blob to download",true,"RandomBlob","string",cmd);
    TCLAP::ValueArg<std::string> localArg("l","local","Local path to store file",true,"RandomFile","string",cmd);
    cmd.parse( argc, argv );

    //Getting connection string and ecomposing it
    string connection_string(getenv("AZURE_STRING"));
    vector<string> connection_info = extract_connection_info(connection_string);

    // Creating Azure Storage context
    shared_ptr<azure::storage_lite::storage_credential> cred = nullptr;
    cred = make_shared<azure::storage_lite::shared_key_credential>(connection_info[0], connection_info[1]);
    shared_ptr<azure::storage_lite::storage_account> account = make_shared<azure::storage_lite::storage_account>(connection_info[0], cred, /* use_https */ true); 
    auto bC = make_shared<azure::storage_lite::blob_client>(account, 10);
    azure::storage_lite::blob_client_wrapper bc(bC);

    //Checking on container
    bool exists = 0;
    exists = bc.container_exists(containerArg.getValue());
    if(exists==0)
    {
        throw invalid_argument("Container does not exist.");
    }


    //Checking on blob  
    exists = bc.blob_exists(containerArg.getValue(), blobArg.getValue());
    if(exists==0)
    {
        throw invalid_argument("Blob does not exist.");
    }

    //Downloading blob as stream
    stringstream out_stream;
    bc.download_blob_to_stream(containerArg.getValue(), blobArg.getValue(), 0, 0, out_stream);

    //Extracting numbers and saving them to file

    string line;
    ofstream out(localArg.getValue());
    int counter = 0;
    while(getline(out_stream, line, '\n'))
    {
        if(counter == 2)
        {
            out <<line <<endl;
        }
        if(counter == 3)
        {
            out <<line;
        }
        counter++;
    }
    out.close();

    return 0;
}