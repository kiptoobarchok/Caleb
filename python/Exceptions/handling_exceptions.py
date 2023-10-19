#!/usr/bin/python3

'''
while True:
    try:
        x = int(input("enter a number: "))
        break
    except ValueError:
        print("Dum dum!!enter a valid  integer, TRY AGAIN...")


print('\n')

try:
    r = 20 / 0

except ZeroDivisionError:
    print("Cannot divide by number")
'''
print('\n')
#multiple exceptions

try:
    value_1 = int(input('Enter value a: '))
    value_2 = int(input('Enter value b: '))
    res = value_1 / value_2

except (ValueError):
    print("enter a valid input")

except ZeroDivisionError:
    print("\ncannot divide a number by 0")

else:
    print(res)

finally: # executes regardless
    print("\nThis a simple division calculator")