#ifndef     UTIL_H
#define     UTIL_H

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

/**
* Converts an azure storage connection string into all relevant subparts.
* Input: Single connections string.
* Ouput: vector<string> 0: Account, 1: Key, 2: Protocol, 3: Suffix
***/ 

vector<string> extract_connection_info(string connection_string); 

#endif /* UTIL_H */