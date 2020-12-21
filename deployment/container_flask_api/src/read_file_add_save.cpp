#include <iostream>
#include <tclap/CmdLine.h>
#include <util.h>

using namespace std;

int main(int argc, char* argv[])
{
    TCLAP::CmdLine cmd("Azure I/O", ' ', "0.1b");
    TCLAP::ValueArg<std::string> containerArg("c","string","Container with file",true,"Something","string",cmd);
    TCLAP::ValueArg<std::string> blobArg("b","string","Blob to download",true,"Something","string",cmd);
    TCLAP::ValueArg<std::string> localArg("l","string","Local path to store file",true,"Something","string",cmd);
    cmd.parse( argc, argv );

    string connection_string(getenv("AZURE_STRING"));
    return 0;
}