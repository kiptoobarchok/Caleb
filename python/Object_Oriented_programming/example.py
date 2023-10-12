#!/usr/bin/python3

class employee:
    raise_amount = 1.05
    count = 0
    def __init__(self, f_name, l_name, salary):
        self.f_name = f_name
        self.l_name = l_name
        self.salary = salary
        employee.count += 1

    def fullname(self):
        return '{} {}'.format(self.f_name, self.l_name)                   
                
    def apply_raise(self):
        self.salary = int(self.salary * self.raise_amount)

    @classmethod
    def update_raise(cls, amount):
        pass

emp_1 = employee("Caleb", "kiptoo", 104000)
emp_2 = employee("Abel", "Kiprob", 20000)
