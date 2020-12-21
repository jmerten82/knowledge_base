# Build on standard ubuntu dev container
FROM dev:base

# Creating one code and one data folder
RUN mkdir /code

# No prompts when installing packages
ARG DEBIAN_FRONTEND=noninteractive

# Installing C++ dependencies
RUN apt install -y libssl-dev libcurl4-openssl-dev cmake g++ uuid-dev pkg-config

# Installing Azure Storage Lite for C++
RUN git clone https://github.com/azure/azure-storage-cpplite.git /code/azure-storage-cpplite
RUN mkdir /code/azure-storage-cpplite/build.release
WORKDIR /code/azure-storage-cpplite/build.release/
RUN cmake ../ -DCMAKE_BUILD_TYPE=Release
RUN cmake --build ./ --target install

# Installing Azure Storage Blob for Python
RUN pip3 install azure-storage-blob