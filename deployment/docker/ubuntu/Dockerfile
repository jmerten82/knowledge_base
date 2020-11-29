# Parent image, Ubuntu 18.04, still a save bet. 
FROM ubuntu:20.04

# What is it doing.
LABEL purpose="Blank Ubuntu install"

# Updating OS packages
RUN apt-get update && apt-get upgrade

# Getting basic C++ env
RUN apt-get install -y build-essential

# Getting Python, pip and FLASK
RUN apt-get install -y python3
RUN apt-get upgrade -y python3
RUN apt install -y python3-pip
RUN pip3 install flask

#Install git
RUN apt-get install -y git

# Exposing flask port
EXPOSE 5000

