#!/usr/bin/python3

# class methods - bound to class, 1st parameter = (cls, ***)

class Robot():
    __count = 0
    def __init__(self):
        type(self).__count += 1

    def die(self):
        type(self).__count -= 1

    @classmethod
    def robo_instance(cls):
        return cls, Robot.__count
    
x = Robot()
print(Robot.robo_instance())
y = Robot()
print(Robot.robo_instance())

print(Robot.die(x))