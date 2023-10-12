#!/usr/bin/python3

class Robot():
    def __init__(self, name, year):
        self.__name = name
        self.__year = year

    def say_hi(self):
        if self.__name:
            print(f"Hi, I am {self.__name}\n")
        else:
            print("Hi i have no name\n")

    def set_name(self, name): #setter
        self.__name = name

    def get_name(self): #getter
        return self.__name

    def set_year(self, value):
        self.__year = value

    def get_year(self):
        return self.__year

    def __repr__(self):
        return ("Name:", self.__name, "Year:", self.__year)

x = Robot("RGDX", 2018)
y = Robot("RGDX-2", 2030)

for rob in [x, y]:
    rob.say_hi()
    print("build year: ", rob.get_year())
    print("rename:", rob.set_name("RGDX-2.0"))

print(x.__repr__())