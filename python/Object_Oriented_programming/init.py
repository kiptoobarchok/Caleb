#!/usr/bin/python3

class dog:
    "define class dog"
    attr1 = "mammal"
    def __init__(self, name):
        self.name = name

Tom = dog('Tom')
print(f"{Tom.name} is a {Tom.__class__.attr1}")