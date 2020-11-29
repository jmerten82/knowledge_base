# Build on standard ubuntu dev container
FROM dev:base

# Creating one code and one data folder
RUN mkdir /code

# Installing MS casablanca
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get install g++ git libboost-atomic-dev libboost-thread-dev libboost-system-dev libboost-date-time-dev libboost-regex-dev libboost-filesystem-dev libboost-random-dev libboost-chrono-dev libboost-serialization-dev libboost-log-dev libboost-locale-dev libwebsocketpp-dev openssl libssl-dev ninja-build cmake -y
RUN git clone https://github.com/Microsoft/cpprestsdk.git ./code/casablanca
RUN mkdir /code/casablanca/build.debug
WORKDIR /code/casablanca/build.debug
RUN cmake -G Ninja .. -DCMAKE_BUILD_TYPE=Debug
RUN ninja
RUN ninja install

# Installing Azure C++ storage
RUN git clone https://github.com/Azure/azure-storage-cpp.git /code/azure-storage-cpp/
RUN apt-get install libxml2-dev uuid-dev
RUN mkdir /code/azure-storage-cpp/Microsoft.WindowsAzure.Storage/build.release
WORKDIR /code/azure-storage-cpp/Microsoft.WindowsAzure.Storage/build.release
RUN CASABLANCA_DIR=/code/casablanca CXX=g++ cmake .. -DCMAKE_BUILD_TYPE=Release
RUN make

# Installing Azure Python storage
RUN pip3 install azure-storage-blob