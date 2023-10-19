#!/usr/bin/python3

try:
    with open("test.txt", 'r', encoding='utf-8') as f:
        data = f.read()
        print(data)

except FileNotFoundError:
    print("file not found")

except PermissionError:
    print("permission denied")

finally:
    print(f.closed)