#!/usr/bin/python3


def div(x, y):
    if (y == 0):
        raise ZeroDivisionError("a number cannot be divided by 0 mathematically")
    
    return x / y

try:
    res = div(12, 0)
except Exception as e:
    print(e)
