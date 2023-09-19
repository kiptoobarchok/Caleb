#Arithmetic operators


        #DIvision (/), (//)
            # float division and floor


print(23 / 3) # float

print(23 // 3) # floor 


#logical operators
#and , or , not

a = 26
b = 21
c = 16

if a > b and a > c:
    print("a is older")

if b < a and b > c:
    print("b is middle ")

if c < a and c < b:
    print("c is last")


if a != 30 or b != 30 or c  != 30:
    print("all are not 30 or above")


if not (b % 2 == 0):
    print("not even")
else:
    print("even")

#assigment operator

a = 23
b = 2
a += 21
b *= 2

print(a , b , sep=", ")

#ternary operator

#program to print max and min of two numbers

a, b = 21, 26

max = a if a > b else b
print("maximum is %d " % max)

min = a if a < b else b
print("minimum is %d" % min)

a = 26
b = 21

young = a if a < b else b
print("The younger one is : %d" % young)
print (any([False, False, False, False]))


#operator function i python

import operator

a = 2
b = 3

print("sum is : ")
print(operator.add(a, b))