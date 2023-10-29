#!/usr/bin/python3

#simple implementation of a class that inherits form superclass
'''
class child(parent):
    pass

'''
#robots

class robot:
    def __init__(self, name):
        self.name = name

    def say_hi(self):
        print(f"Hi , I am {self.name}")

class doctor_robot(robot):
    def say_hi(self):
        print(f"Hi , I am {self.name} and i am a specialized robot")

a = robot("RGDX")
b = doctor_robot("RGDX-2.0")

a.say_hi()
b.say_hi()
robot.say_hi(b)

print(a, type(a))
print(b, type(b))

print(isinstance(a, robot), isinstance(a, doctor_robot))
print(isinstance(b, robot), isinstance(b, doctor_robot))