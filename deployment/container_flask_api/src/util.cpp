#include <util.h>

vector<string> extract_connection_info(string connection_string)
{
    vector<string> out;
    size_t pos1 = connection_string.find("AccountName=");
    string aux = connection_string.substr(pos1+12);
    out.push_back(aux.substr(0, aux.find(";")));

    pos1 = connection_string.find("AccountKey=");
    aux = connection_string.substr(pos1+11);
    out.push_back(aux.substr(0, aux.find(";")));

    pos1 = connection_string.find("DefaultEndpointsProtocol=");
    aux = connection_string.substr(pos1+25);
    out.push_back(aux.substr(0, aux.find(";")));

    pos1 = connection_string.find("EndpointSuffix=");
    aux = connection_string.substr(pos1+15);
    out.push_back(aux);

    
    return out;
}