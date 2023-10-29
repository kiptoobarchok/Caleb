#/usr/bin/python3


def Add(a, b):
    
    return a + b


import doctest
doctest.testfile("tests/test_add.txt")