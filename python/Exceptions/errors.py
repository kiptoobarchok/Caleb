#!/usr/bin/python3

try:
    result = 10 / 1
except:
    raise ZeroDivisionError("can't divide with 0 an integer")
else:
    print(result)


print('\n')

try:
    f = open('test.txt', 'w', encoding='utf-8')
    f.write("my file line example\n")
    f.write("more line\n")
except IOError:
    print("cant find file or read data\n")
finally:
    print("write to file success\n")
    f.close()
