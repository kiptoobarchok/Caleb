#!/usr/bin/python3

#def hi(obj):
  #  print("hi , i am " + obj.name )


class Robot:
    def __init__(self, name):
        self.name = name
        
    def say_hi(self):
        print(f"hi, i am {self.name} and i am {self.age} yrs")

    def set_age(self, age): #setter
        self.age = age

    def set_buildyr(self, year):#setter
        self.year = year

    def get_age(self): #getter
        return self.age

    def __repr__(self):
        return (f"Name: {self.name}\nBuild year: {self.year}")

x= Robot("RGDX")
x.set_age(5)
x.set_buildyr(2018)
x.say_hi()
print(x.get_age())
print(x.__dict__)
print(x.__repr__())
