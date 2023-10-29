#!/usr/bin/python3

class robots:
    __count = 0
    def __init__(self, name):
        self.name = name
        type(self).__count += 1
    
    @staticmethod
    def total_robots():
        return robots.__count
    

a = robots("RGDX")
print(robots.total_robots())
b = robots("RGDX-2.0)")
print(robots.total_robots())
print(robots.total_robots())
