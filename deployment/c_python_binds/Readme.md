# C to Python binds
A little test bed for calling C, C++ and Cuda from Python.

This is my little testbed to play with C-Python binds. Ultimately I want to
1. Create some C++ classes including inheritance
1. Compile and call from Python in Jupyter notebook
1. Include some OpenMp examples, or C11 threads
1. Ideally also perform some CUDA tests.

## The C++-class
It shall represent a nxn matrix with a few operations implemented on-top

## Links
- [pybind11](https://github.com/pybind/pybind11)
- [pybind11 — Seamless operability between C++11 and Python](https://pybind11.readthedocs.io/en/latest/)
- [Boost.Python](https://www.boost.org/doc/libs/1_58_0/libs/python/doc/)
- [Installing Cuda](https://docs.nvidia.com/cuda/cuda-installation-guide-linux/index.html)
- [OpenMP](https://computing.llnl.gov/tutorials/openMP/)
- [Random real numbers in C++](https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution)