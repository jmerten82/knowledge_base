#include <iostream>

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
    cout <<"Your container " <<flush;
    if(exists==1)
    {
        cout <<"exists" <<flush;
    }
    else
    {
        cout << "does not exist" <<flush;
    }
    cout <<"." <<endl <<endl;

    
    return 0;
}