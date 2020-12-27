# Multi language code deployment in container with Flask API
The following example is meant to how to read a file from a blob store and some text to it in C++, save it locally, read it in Python, add more to it and save it backto the blob. And all of that is done in a container. 

## Container setup
The container this project is running in is a three stage build:
1. **Base container:** Standard Ubuntu 20.04
2. **Dev container:** C++ and Python 3.9 environments
3. **Azure blob:** Installs the C++ and Python Azure Storage SDK.
4. **Project dev:** Gets specific Azure crededentials at build via envs and clones knowledge base from github.

## C++ Part
[Azure Storage Client Lib](https://github.com/Azure/azure-storage-cpp)

[Azure Storage SDK lite (C++)](https://github.com/Azure/azure-storage-cpplite)

## Python part

[Azure Storage Python](https://github.com/Azure/azure-storage-python)

[VS Code Flask intro](https://code.visualstudio.com/docs/python/tutorial-flask)

[Flask quickstart](https://flask.palletsprojects.com/en/1.1.x/quickstart/)

[FLASK APIS](https://blog.miguelgrinberg.com/post/designing-a-restful-api-with-python-and-flask)

[Python subprocess](https://docs.python.org/3/library/subprocess.html)

## General
[HTTP Status codes](https://en.wikipedia.org/wiki/List_of_HTTP_status_codes)

## Compiling
```
g++ -o /code/read_file_add_save ./read_file_add_save.cpp ../src/util.cpp /code/azure-storage-cpplite/build.release/libazure-storage-lite.a -I ../include/ -lcrypto -lcurl -lpthread -luuid
```


## Curl
Here some sample curl commands:

```
curl -i http://localhost:5000/
```
``` 
curl -i -H "Content-Type: application/json" -X POST -d @sample_config.json http://localhost:5000/23 
```
