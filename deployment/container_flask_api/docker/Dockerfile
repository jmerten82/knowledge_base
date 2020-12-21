# Build on standard ubuntu dev container
FROM dev:azure_storage

ARG cred
ENV AZURE_STRING=$cred

# Some final C++ installs
RUN apt-get install -y libtclap-dev

# Cloning the code base
RUN git clone https://github.com/jmerten82/knowledge_base.git /code/knowledge_base

# Exposing standard flask port
EXPOSE 5000

# Switch workdir to knowledge base itself
WORKDIR /code/knowledge_base