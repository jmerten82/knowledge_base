# Parent image, Ubuntu 18.04, still a save bet. 
FROM ubuntu:18.04

# What is it doing.
LABEL purpose="Run Jupyter notebooks."

# Updating OS packages
RUN apt-get update && apt-get upgrade

# Getting latest Anaconda
RUN mkdir /downloads
ADD https://repo.anaconda.com/archive/Anaconda3-2020.02-Linux-x86_64.sh /downloads
RUN chmod a+x /downloads/Anaconda3-2020.02-Linux-x86_64.sh
RUN /downloads/Anaconda3-2020.02-Linux-x86_64.sh -b
ENV PATH /root/anaconda3/bin:$PATH
RUN conda update conda
RUN conda update anaconda
RUN conda update --all