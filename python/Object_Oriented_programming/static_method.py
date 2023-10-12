#!/usr/bin/python3

#Static methods - access and change class attributes
    
class Robot():
    __count = 0
    def __init__(self, name):
        type(self).__count += 1

    @staticmethod
    def robo_instance():
        return Robot.__count
    
print(Robot.robo_instance())
x = Robot('RGDX')
print(Robot.robo_instance())
y= Robot('RGDX-2')

print(Robot.robo_instance())