from flask import Flask
from flask import request
from flask import jsonify
from flask import abort

app = Flask(__name__)

@app.route('/')
def index():
    return "Hello World."

@app.route('/pull/<uuid>', methods=['POST'])
def grab_modify_save(uuid):
    if request.is_json:
        info = request.get_json()
    else:
        abort(400)
    if "container" not in info or "blob" not in info:
        abort(400)
    
    return jsonify({"uuid":uuid, "info":info})

@app.route('/push')
def push_to_adls():
    pass

if __name__ == '__main__':
    app.run(debug=True)