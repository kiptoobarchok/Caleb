#!/usr/bin/python3

class student:
    "class representing students"
    def __init__(self, name, grade, adm, school):
        self.name = name
        self.grade = grade
        self.school = school
        self.adm = adm
        self.email = name + str(adm) + "@gmail.com"


student_1 = student("Caleb", "B+", 9090, "Kabarnet")

print("Student name:" ,student_1.name)
print("Student grade:" ,student_1.grade)
print("contact: ", student_1.email)

