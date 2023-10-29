#!/usr/bin/python3


with open('file.txt', 'w', encoding='utf-8') as f:
    f.write("Entire file\n")
    f.write('first line\n')
    f.write('second line\n')


with open('file.txt', 'a', encoding='utf-8') as f:
    f.write('last line\n')


with open('file.txt', 'r', encoding='utf-8') as f:
    for line in f:
        i = f.readlines()
        print(i)

print(f.closed)