#!/usr/bin/python3

class Robot:
    pass

x = Robot()
y = Robot()

x.name = "RGDX" #dynamically creating new attributes
y.name = "RGDX-2"
y.brand = "AURA-2.0"
y.energy_type = "Nano Tech 2.0"
Robot.brand = "AURA" #attributes to class
Robot.energy_type = 'Nano-tech'

print (x.name ,", " , y.name)
print(x.brand, ',', y.brand)

print(Robot.energy_type,',', x.energy_type,',', y.energy_type)
# print(x.__dict__, y.__dict__)
# print(Robot.__dict__)

