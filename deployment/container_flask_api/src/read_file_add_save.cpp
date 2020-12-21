#include <iostream>
#include <tclap/CmdLine.h>
#include <util.h>

using namespace std;

int main(int argc, char* argv[])
{
    TCLAP::CmdLine cmd("Azure I/O", ' ', "0.1b");
    TCLAP::ValueArg<std::string> containerArg("c","container","Container with file",true,"RandomContainer","string",cmd);
    TCLAP::ValueArg<std::string> blobArg("b","blob","Blob to download",true,"RandomBlob","string",cmd);
    TCLAP::ValueArg<std::string> localArg("l","local","Local path to store file",true,"RandomFile","string",cmd);
    cmd.parse( argc, argv );

    string connection_string(getenv("AZURE_STRING"));
    vector<string> connection_info = extract_connection_info(connection_string);


    
    return 0;
}