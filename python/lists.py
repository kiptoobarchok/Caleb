# can be altered 
# enclosed via []

siblings = ['Abel', 'Caleb', 'Peter']
print(siblings)
print(type(siblings))

#altering items in a list

siblings[1] = 'caleb' #using indexing
print(siblings)

#len()

print("There are ",len(siblings), " siblings")

#accessing items - indexing (0 - n)

print("The young one is", siblings[-1],)

print(siblings[:2])
print(siblings[1:])
print(siblings[0:2]) # 0 - included and 2 - excluded

#adding items to list - append(), insert()

siblings.append('Chela')
print(siblings)

siblings.insert(0, 'Rose') #insert takes two arguements
print(siblings)

fam = ['Ali', 'Philip']
siblings.extend(fam)

print(siblings)

#remove items from list
siblings.remove('Ali')
print(siblings)

popped = siblings.pop() # by default pops the last value

print(popped)

#sorting items

num = [1, 2, 24, 53, 64, 25, 35, 76]
num_2 = [1, 2, 24, 53, 64, 25, 35, 76]
num.sort(reverse=True)
num_2.sort()
print(num_2)
print(num)