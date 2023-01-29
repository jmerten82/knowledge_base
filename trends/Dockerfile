# Parent image, Ubuntu 18.04, still safest bet
FROM ubuntu:18.04

# What is it doing.
LABEL purpose="Blank Ubuntu install"

# Updating OS packages
RUN apt-get update -y && apt-get upgrade -y

# Getting Python, pip and FLASK
RUN apt-get install -y python3
RUN apt-get upgrade -y python3
RUN apt install -y python3-pip
RUN pip3 install flask

#Install git
RUN apt-get install -y git

# Installing Python requirements
COPY requirements.txt requirements.txt
RUN pip3 install -r requirements.txt