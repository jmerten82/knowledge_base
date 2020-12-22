import os
import subprocess

from flask import Flask
from flask import request
from flask import jsonify
from flask import abort

app = Flask(__name__)

@app.route('/')
def index():
    return "Hello World."

@app.route('/<uuid>', methods=['POST'])
def grab_modify_save(uuid):
    if request.is_json:
        info = request.get_json()
    else:
        abort(400)
    if "container" not in info or "blob" not in info:
        abort(400)
    file = open("/code/uuid", "w")
    file.write(str(uuid))

    subprocess.Popen(["/code/read_file_add_save", "-l", "/code/file.txt", "-c", info["container"], "-b", info["blob"]])

    return jsonify({"uuid":uuid, "info":info})

@app.route('/push')
def push_to_adls():
    pass

if __name__ == '__main__':
    app.run(debug=True)