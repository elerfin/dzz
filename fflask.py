from flask import (
  Flask, 
  render_template, 
  request, 
  session, 
  url_for, 
  redirect
)

app = Flask(__name__)
app.secret_key = 'iefjs'

@app.route('/', methods=["GET"])
def index():
  return render_template("index.html")

if __name__ == '__main__':
  app.run()