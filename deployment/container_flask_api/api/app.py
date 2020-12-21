from flask import Flask
from flask import request

app = Flask(__name__)

@app.route('/')
def index():
    return "Hello World."

@app.route('/pull', methods=['POST'])
def grab_modify_save():
    pass

@app.route('/push')
def push_to_adls():
    pass

if __name__ == '__main__':
    app.run(debug=True)