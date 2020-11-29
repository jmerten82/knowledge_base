# Build on standard ubuntu dev container
FROM dev:azure_blob

ARG cred
ENV AZURE_STRING=$cred

RUN git clone https://github.com/jmerten82/knowledge_base.git /code/knowledge_base

WORKDIR /code/knowledge_base