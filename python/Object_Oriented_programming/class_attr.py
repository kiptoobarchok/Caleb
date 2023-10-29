#!/usr/bin/python3

class Robot():
    a = "class attribute"

x = Robot()
y = Robot()

print(x.a)
print(y.a)

Robot.a = "Changed attribute"
print(x.a)
print('\n')

#with examples
class robot():
    robo_laws = (
    '''cannot harm human or allow human to be harmed''',
    '''obey orders given by human less it conflicts with rule 1''',
    '''protect its own existence as long it does not conflict with one or two'''
    )
    def __init__(self, name, year):
        self.name = name
        self.year = year

for n, text in enumerate(robot.robo_laws):
    print(str(n + 1)+ ":\n" + text)


print('\n')
# example 2
class C():
    count = 0
    def __init__(self):
        type(self).count += 1

    def __del__(self):
        type(self).count -= 1

x = C()
print("instance: " + str(C.count))
y= C()
print("instance: " + str(C.count))
x.__del__()
print("instance: " + str(C.count))

