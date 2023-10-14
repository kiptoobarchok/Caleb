#!/usr/bin/python3

name = "caleb"
age = 21
dob = 2.09

print(name, ",", age,",", dob)

#multiple assignment

a, b, c = 1, 2, "a"

print(a)
print(b)
print(c)

#local variable
#defined inside a function.

def add(a, b):
    '''function to add a and b'''
    sum = a + b
    return sum

print(add.__doc__)
print(add(3, 2))

def sum(): #another way to declare a local variable
    a = 3
    b = 3
    sum = a + b
    return sum

print (sum())
#global variable
#defined outside a function

a = 3
b = 2
def add():
    add = a + b
    return add

print(add())