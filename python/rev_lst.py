#!/usr/bin/python3

#concatenate two lists

lst_1 = ["Physics", "English", "Kiswahili", "Maths", "Biology"]
lst_2 = ["Geography", "History", "Electricity"]
total_lng = lst_1 + lst_2

print(total_lng)
print(total_lng[2:-2])
print('\n')


print(tuple(lst_2))
print('\n')
total_lng.append("Chemistry")
print(total_lng)
print('\n')

del total_lng[-2]
print(total_lng)

for i in range(len(total_lng)):
    print(f"{i} : {total_lng[i]}")

print('\n')

chrs = [chrs for chrs in 'Tutorialspoint' if chrs not in 'aeiou']
print(chrs)

ch = [ch for ch in 'Caleb' if ch in 'aeiou']
print(ch)

print('\n')

total_lng.sort()
print(total_lng)