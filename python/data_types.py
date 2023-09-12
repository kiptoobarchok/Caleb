#!/usr/bin/python3

#DATA TYPES IN PYTHON
#numeric - int, float, complex
#string
#Sequence = list, tupple, range
#binary
#Boolean, mapping, set
#non-type

age = 21
name = "caleb"
dob = 2.09
comp = 10+3j #complex number

print("His name is ", name, "and is aged ", age, "born on ", dob)

print(type(name))
print(type(age))

print(comp)
print(type(comp))

#LISTS
#enclosed by [] and separated by commas
#can contain different data types
#applies indexing

my_list = ['Caleb', 21, 2.09]
print("His name is ", my_list[0], "and is aged ", my_list[1], "born on ", my_list[2])
print(my_list)

#updating a list 
my_list[1] = 20
my_list.append("Abel")
print(my_list)

#TUPPLE
#similar to list but can only be thought of as read-only cannot be updated
#enclosed usong ()

my_tupple = ("Caleb", 21, 2.09)
tiny_tupple = (16, 'Peter', 2.07)
print(my_tupple); print("- this is a tupple")
print("His name is ", my_list[0], "and is aged ", my_list[1], "born on ", my_list[2])

print(tiny_tupple + my_tupple)#concatenate tupple

#RANGE
#syntax = range(start, stop, step-increment)

for i in range(0, 10, 3):
    print(i)

#Dictionaries
#enclosed by curly braces

tinydict = {'name' : 'Caleb', 'age' : 21}
print(tinydict.keys()) #accessing keys
print(tinydict.values())

#id function = prints address

x = 35
print(id(x))