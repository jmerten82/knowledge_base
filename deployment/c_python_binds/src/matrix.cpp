/***
 * This defines some simple matrix classes. 
 * It includes operators, general methods, operators and inheritance.
 * Finally, there are also some methods that make used of shared
 * memory parallelism through OpenMP.
***/

#include <matrix.h>

using namespace std;

SMatrix::SMatrix(int n_in, double value = 0.) : n{n_in}
{
    dim = n*n;
    data.resize(dim);
    fill(data.begin(), data.end(), value);
}