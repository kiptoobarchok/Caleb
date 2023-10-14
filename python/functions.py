#!usr/bin/python3

def greetings():
   "This is docstring of greetings function"
   print ("Hello World")
   return None
greetings()

#Calling functions
def printme(str):
    "calling a function"
    print (str)
    return
printme("first call")
printme("sec call")

#function arguements
def greet(name):
    print("Hello {}".format(name))
    return

greet(input("enter name: "))


#functions with return statements

def mul(a, b):
    "function to multiply two values"
    pr = a * b
    return (pr)

a = 3
b = 4
res = mul(a, b)
print("a = {} and b = {} , hence (a * b) = {}".format(a, b, res))

#Default arguements
def info(name, age=21):
    print("This is my info")
    print("Name: ", name)
    print("Age: ", age)
    return

info("Caleb")

