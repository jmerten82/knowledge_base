# From base dev container which includes python3 and c++ environments.
FROM dev:base

# Installing OpenMP for developers
RUN apt-get install libomp-dev -y

# Installing pybind11
RUN pip3 install pybind11

# Installing Jupyter for interactive testing
RUN pip3 install jupyter