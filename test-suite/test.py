#!/usr/bin/env python3

import requests
import os

# start up django website for real
os.shell("python3 ./manage.py blah blah &")


resp = requests.get("http://localhost:8000/gift.html")

if "something bad" in resp.bytes():
    print("we got an XSS")
    os.exit(-1)


