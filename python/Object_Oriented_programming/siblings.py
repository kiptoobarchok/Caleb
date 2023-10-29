#!/usr/bin/python3


class bro():
    count = 0
    def __init__(self, name, age, school):
        self.name = name
        self.age = age
        self.school = school
        bro.count += 1

    def say_hi(self):
            print(f"Hi I am {self.name},{self.age} and I attend {self.school}")

    def rem_bro(self):
        print(f"{self.name}: removing myself")
        bro.count -= 1

    @classmethod
    def total(cls):
        print(f"This are {cls.count} siblings")

    #setter
    def set_email(self, email):
        self.email = email

    #getter
    def get_email(self):
        return self.email

    #another setter:
    def job(self, job):
        self.job = job

    #getter for job
    def get_job(self):
        return self.job

    #another setter
    def birth_yr(self, year):
        self.year = year

    def get_year(self):
        return (2023 - int(self.age))

    #magic_methods
    def __str__(self):
        return f"{self.name} , {self.age} , {self.school}"

a = bro("Abel", 26, "Kaborok")
b = bro("Caleb", 21, "ALX")
c = bro("Peter", 16, "Chebwagan")

a.set_email("Abelcheru5134@gmail.com")

b.job("Software Engineer")

print(a.get_email())

print(f"\n{b.name} is a {b.get_job()}")
a.say_hi()
b.say_hi()
c.say_hi()
bro.total()

print(f"\n{a.get_year()} : {a.name}'s birth year")
print(f"\n{b.get_year()} : {b.name}'s birth year")
print(f"\n{c.get_year()} : {c.name}'s birth year")

print(a.__str__())