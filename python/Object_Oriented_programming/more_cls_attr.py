#!/usr/bin/python3

class dog:
    attr1 = "mammal"

    def __init__(self, name):
        self.name = name

dog_1 = dog('Luna')

print(f"{dog_1.name} is a {dog_1.__class__.attr1}")