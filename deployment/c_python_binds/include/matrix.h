/***
 * This declares some simple matrix classes. 
 * It includes operators, general methods, operators and inheritance.
 * Finally, there are also some methods that make used of shared
 * memory parallelism through OpenMP.
***/


// std includes
#include <iostream>
#include <vector>
#include <stdexcept>
#include <random>

// Additional includes
#include "omp.h"

using namespace std;

/**
 * The main class of this header, representing a square matrix.
**/


class SMatrix
{
    protected:

    // The 1D size of the matrix
    int n;

    // The total dize of the matrix.
    int dim;

    // The data vector of the matrix. 
    vector<double> data;

    public:

    // Standard constructor, initialising with size n
    // and setting all data to value.

    SMatrix(int n_in, double value);

    //Setting all matrix elements to random numbers
    void randomise();

    // The bracket operator, returning row vector i.
    vector<double> operator [](int i);

    // The get operator, getting matrix element at row i and column j.
    double get(int i, int j);

    // The set operator, setting matrix element at row i and column j.
    void set(int i, int j);

    // The addition operator, piecewise adding matrix elements for right sized matrices.
    SMatrix operator +(SMatrix in);

    // The multiplication operator, calculating Alk = Bil*Cki
    SMatrix operator *(SMatrix in);

    // Writes matrix to ASCII file outfile
    void to_file(string outfile);
};

class Matrix : SMatrix
{
    protected:

    // The number of columns in the matrix which can now defer from n
    int m;

    public:
    
    // Standard constructor
    Matrix(int n_in, int m_in, double value = 0.);
};