#1/usr/bin/python3

#sests = immutable , {}

set_1 = {"Rahul", "caleb" , "andrew", 25, 21, 26 , "daniel"}
set_2 = {"Flossy", "Rose", 'Brenda' , 27}

t_set = set_1 & set_2
unionset = set_1.union(set_2 )
hsh = set_1|set_2
set_2.add("Bianca")
print(t_set)

for i in set_2:
    print(i)

print('\n')
print(unionset)

print('\n')
print(hsh)