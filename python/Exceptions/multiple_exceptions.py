#!/usr/bin/python3


try:
    def div(a, b):
        res = a / b
        return res
    
except (TypeError, ZeroDivisionError) as e:
    print(f"This error occured: {e}")

div(2, 's')