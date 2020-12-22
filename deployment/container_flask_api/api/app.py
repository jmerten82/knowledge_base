from flask import Flask
from flask import request

app = Flask(__name__)

@app.route('/')
def index():
    return "Hello World."

@app.route('/pull', methods=['POST', 'GEsdT'])
def grab_modify_save():
    if not request.json or not 'container' in request.json or not 'blob' in request.json:
        abort(401)
    container = request.json['container']
    blob = request.json['blob']
    return container, blob

@app.route('/push')
def push_to_adls():
    pass

if __name__ == '__main__':
    app.run(debug=True)