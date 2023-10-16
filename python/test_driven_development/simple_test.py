#!/usr/bin/python3

def my_func(a, b):
    """
    >>> my_func(2, 3)
    5
    >>> my_func(3.3, 3)
    6.3
    >>> my_func('a', 5)
    Traceback (most recent call last):
        ...
    TypeError: can only concatenate str (not "int") to str
    """
    return a + b

