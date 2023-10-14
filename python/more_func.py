#!/usr/bin/python3

def greet(first_name, last_name):
    print(f"Hi {first_name} {last_name}")
    print("Welcome to ALX")
    return 

print(greet("Caleb", "Kiptoo"))

def greet_2(name):
    "using return statement"
    return (f"Hi {name}")

msg = greet_2("Flossy")
print(msg)
print('\n')

#more on arguments
def mul(*num):
    t = 1
    for i in num:
        t *= i
    return t

print(mul(5, 3, 4, 5))
print('\n')

#keyword arguments
def user_info(**data):
    print(data)

user_info(id=2030, name="Caleb", age=22)