#!/usr/bin/python3


class person:
    "define a class named person"
    def __init__(self, name):
        self.name = name


    def greet(self):
        print(f"Hi {self.name}")


person('Caleb').greet()