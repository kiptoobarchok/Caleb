# Destructors

class siblings():
    def __init__(self, name):
        self.name = name
        print(f"{self.name} created")

    def __del__(self):
        print("Destroyed!!!!!")

a = siblings("Abel")
print(a)
print("Initiating a destructor")
a.__del__
del a
