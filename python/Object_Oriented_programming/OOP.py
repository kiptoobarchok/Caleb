#!/usr/bin/python3

class siblings:
    "My first class"
    count = 0
    def __init__(self, f_name, l_name, age, school):
        self.f_name = f_name
        self.l_name = l_name
        self.age = age
        self.school = school
        self.email = f_name + l_name + '@gmail.com'
        siblings.count += 1

    def fullname(self):
        return '{} {}'.format(self.f_name, self.l_name)

    def total(self):
        print(siblings.count)
        return


first = siblings("Abel", "kiprob", 26, "Kaborok")
second = siblings("Caleb", "kiptoo", 21, "ALX")
third = siblings("Peter", "kipkirui", 16, "Chebwagan")

print(siblings.count)

print(f"The first born is {first.fullname()} and is {first.age} yrs\
.He goes to {first.school} school.You can contact him via {first.email}")
