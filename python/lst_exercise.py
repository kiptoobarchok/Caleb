#!/usr/bin/python3

#(a) - program to remove odd numbers in a list

lst = [12, 23, 24, 41, 65, 34, 675 , 352, 7, 32]
lst_2 = [34, 33, 24,  65 , 2, 6, 8, 54, 6]

even = [even for even in lst if even % 2 == 0]
print(even)

set1 = set(lst)
set2 = set(lst_2)

set_common = set1 & set2
print(set_common)

print('\n')

class person:
    count = 0
    def __init__(self, name, age):
        self.name = name
        self.age = age
        person.count += 1

    def greet(self):
        print(f"Hi {self.name}, How are you doing, is this your age  here: {self.age}")

person_1 = person("Caleb", 22)
person_1.nationality = ("Kenyan")
person_2 = person("Abel", 26)
person.greet(person_1)

print(person_1.__dict__)
print(person_2.__dict__)
print(person.count)
