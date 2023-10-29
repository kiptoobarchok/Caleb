#!/usr/bin/python3

import math

print(f"Pi value: {math.pi:.2f}") #formatted string literals

print('\n')

table = {'Abel': 26, 'Caleb': 21, 'Peter': 16}

print("one: {0[Abel]}\ntwo : {0[Caleb]}\nthree: {0[Peter]}".format(table))
print('\n')
for name, age in table.items():
    print(f"{name:3} ==> {age:5d}")

print('\n')

list_s = {'one': 1, 'two': 2}

for i, no in list_s.items():
    print(f"{i}: {no}")

print('\n')

print("we ate {0}, {2} and {1}".format('ugali', 'eggs', 'sukuma'))
print("we ate {0}, {1} and {2}".format('ugali', 'eggs', 'sukuma'))

print('\n')

for x in range(1, 11):
    print(f"{x:2d} {x*x:3d} {x*x*x:4d}")

print('\n')
a = 'bugs'
print(f'i hate {a!r}!!!!!')