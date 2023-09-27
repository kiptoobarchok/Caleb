#!/usr/bin/python3

#this program returns:
    # Buzz if number is divisible by 5 only
    # Fizz if no. is divisible by 3 only
    # Fizz_Buzz = divisible by both 3 and 5
    # number : not divisible by either

def fizz_buzz(input):
    "Check divisibility"
    
    if input% 5 == 0 and input % 3 == 0:
        return "Fizz_Buzz"
 
    if input% 3 == 0:
        return "Fizz"

    if input% 5 == 0:
        return "Buzz"

    else:
        return input

a = fizz_buzz(7)
print(a)
