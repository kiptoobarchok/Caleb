#!usr/bin/python3


# add() = for single element
# update = iterable

lst = [1, 2, 3, 4, 4, 5, 6]

set_lst = set(lst)
print(set_lst)

set_lst.add(7)
print("\n",set_lst)

print('\n')
lst_2 = set([8, 9, 10])
set_lst.update(lst_2)
print(set_lst)

#pop() - randomly pops the last element
# remove - specific element
print('\n')
print(set_lst.pop())
print('\n')
print(set_lst.pop())


set_lst.remove(4)
print(set_lst)
