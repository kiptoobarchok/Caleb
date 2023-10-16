#!usr/bin/python3

class Customer():
    "smaple of a customer class"
    discount = 0.95

    def __init__(self, f_name, l_name, purchase):
        self.f_name = f_name
        self.l_name = l_name
        self.purchase = purchase

    @property #define a getter method for a class attribute
    def customer_mail(self):
        return f"{self.l_name}{self.f_name}@email.com"
    
    @property
    def customer_fullname(self):
        return f"{self.f_name} {self.l_name}"
    
    def apply_discount(self):
        self.purchase = int(self.purchase * self.discount)