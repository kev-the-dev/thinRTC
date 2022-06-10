#!/usr/bin/env python3
import re

# pattern = re.compile("/\+#define *([A-Z_]+) *1/")
pattern = re.compile("#define *([A-Z_]+) *1")

with open('config.h') as f:
    data = f.read()
    matches = pattern.findall(data)
    for m in matches:
        print("\"{m}\",".format(m=m))
