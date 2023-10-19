#!/usr/bin/python3

#set()- returns set object from sequence discarding repeated elements
# sequence − An object of list, tuple or str type
#sets are unordered
#only immutable objects can be used to create set object

s2 = {1, 2, 3, 4, 4}
print(s2)
string = set('Caleb')
string2 = set('Kiptoo')
print(string)
print('c' in string)
string.add ('abu')
print(string)

#accesing items in a set
string3 = string.union(string2)
print(string3)