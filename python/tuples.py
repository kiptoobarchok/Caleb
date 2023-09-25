#Tuples are immutable
#are enclosed within () unlike lists - []

names = ('abel', 'caleb', 'peter')
print(names)
print(type(names))

city = "Nairobi","mombasa" #alternative way to create a tuple
type(city)

add = (names, city) #nesting tuples
print(add)

#slicing

num = (1, 2, 3, 4, 5)
num[::-1]
print(num[::-1])

#converting list to tuple
list1 = [1,2, 3, 4, 5]
print(type(list1))

tpl = tuple(list1)
print(type(tpl))

#exercise

tpl1 = (1,2,3,4,5,6,7,8,9)
tpl_1 = (10),
tpl2 = (tpl1 + tpl_1)
print(tpl2)

tpl_2 = tpl2[::-1]
print(tpl_2)

tpl3 = (tpl1 + tpl_2)
print(tpl3)