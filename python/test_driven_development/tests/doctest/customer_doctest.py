#!/usr/bin/python3

class customer():
    """
    >>> customer_1 = customer("Abel", "Kiprob", 4500)
    >>> customer_2 = customer("Caleb", "Kiptoo", 3800)
    >>> customer_1.email()
    'KiprobAbel@email.com'
    >>> customer_2.email()
    'KiptooCaleb@email.com'
    >>> customer_1.fullname()
    'Abel Kiprob'
    >>> customer_2.fullname()
    'Caleb Kiptoo'
    >>> customer_1.apply_discount()
    225
    >>> customer_2.apply_discount()
    190
    """
    discount = 0.05

    def __init__(self, first, last, purchase_discount):
        self.first = first
        self.last = last
        self.purchase_discount = purchase_discount

    def fullname(self):
        return f"{self.first} {self.last}"
    
    def email(self):
        return f"{self.last}{self.first}@email.com"
    
    def apply_discount(self):
        self.purchase_discount = int(self.purchase_discount * self.discount)
        return self.purchase_discount
    
if __name__ == "__main__":
    import doctest
    doctest.testmod()