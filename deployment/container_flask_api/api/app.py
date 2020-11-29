from flask import Flask

app = FLask(__name__)

@app.route('/')
def index():
    return "Hello World."

if__name__ == '__main__':
    app.run(debug=True)