#!/usr/bin/python3

a = int(input("Enter a: "))
b = int(input("Enter b: "))

def mul(a, b):
    return a * b

def div(a, b):
    if (b == 0):
        raise ValueError ("cannot divide a number by 0")
    return (a / b)

def add_sum(a, b):
    return (a + b)

def diff(a, b):
    return (a - b)

print(div(a, b))
