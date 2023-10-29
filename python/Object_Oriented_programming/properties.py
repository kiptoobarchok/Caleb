#!/usr/bin/python3


class p:
    def __init__(self, x):
        self.__x = x

    def get_x(self):
        return self.__x
    
    def set_x(self, x):
        self.__x = x
        return self.__x


p1 = p(42)
p2 = p(4711)
print(p1.get_x())
p1.set_x(42)
print(p1.get_x())

res = (p1.set_x(p1.get_x() + p2.get_x()))
print(res)


class P:
    def __init__(self, x):
        self.x = x

p_1 = P(42)
p_1.x
p_2 = P(4711)

print(p_1.x + p_2.x)