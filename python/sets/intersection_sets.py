#!/usr/bin/python3


names = {"Caleb", "Kiptoo", "Abel", "Peter"}
names_1 = {"Kiptoo", "Ivy", "Nicole", "Jewel"}
names_2 = {"Caleb", 'Dancun', "dickens", "Dennis", 'Kiptoo'}

# both or is in all of them
print(names.intersection(names_1, names_2))

#both or either
print(names.union(names_1, names_2))


# difference
print(names.difference((names_2)))

#challenge - unique words
sent = "be the change you wish to see the world"
lst = sent.split()
print(lst)
print(set(lst))