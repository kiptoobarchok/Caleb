#!/usr/bin/python3


class employee:
    __count = 0
    __raise = 0.2
    def __init__(self):
        type(self).__count += 1

    def set_name(self, name):
        self.__name = name

    def get_name(self):
        return self.__name
    
    def set_age(self, age):
        self.__age = age

    def get_age(self):
        return self.__age
    
    def set_email(self, email):
        self.__email = email

    def set_adm(self, adm):
        self.__adm = adm
    
    def get_adm(self):
        return self.__adm
    
    def get_email(self):
        return (f"{self.__name}{self.__adm}@gmail.com")
    
    @staticmethod
    def apply_raise(self):
        salary_after_raise = ((self.__salary * employee.__raise) + self.__salary)
        return salary_after_raise

    @classmethod
    def total_employees(cls):
        return f"There are {employee.__count} employees at AURA"

    def set_salary(self, salary):
        self.__salary = salary
        return self.__salary

    def get_salary(self):
        return self.__salary
    
    def set_position(self, position):
        self.__position = position


a = employee()
a.set_name("Caleb")
a.set_age(21)
a.set_position("CEO")
a.set_salary(734000)
a.set_adm(9090)
print(a.__dict__)
print(a.get_email())
print(employee.total_employees())
print(a.get_salary())
print(a.apply_raise(a))
print(a.get_name())