# Parent image, plain Ubuntu installation
FROM ubuntu:base

# Getting basic C++ env
RUN apt-get install -y build-essential

# Getting Python, pip and FLASK
RUN apt-get install -y python3
RUN apt-get upgrade -y python3
RUN apt install -y python3-pip
RUN pip3 install flask

#Install git
RUN apt-get install -y git


