#!/usr/bin/python3

import unittest
from customer import Customer


class TestCustomer(unittest.TestCase):
    def setUp(self):
        self.customer_1 = Customer("Abel", "Kiprob", 55000)
        self.customer_2 = Customer("Caleb", "Kiptoo", 36000)
        self.customer_3 = Customer("Peter", "Kipkirui", 25000)


    def test_customer_mail(self):
        self.assertEqual(self.customer_1.customer_mail, "KiprobAbel@email.com")
        self.assertEqual(self.customer_2.customer_mail, "KiptooCaleb@email.com")

    def test_customer_fullname(self):
        self.assertEqual(self.customer_1.customer_fullname, "Abel Kiprob")
        self.assertEqual(self.customer_2.customer_fullname, "Caleb Kiptoo")

    def test_apply_discount(self):
        self.customer_1.apply_discount()
        self.customer_2.apply_discount()

        self.assertEqual(self.customer_1.purchase, 52250)
        self.assertEqual(self.customer_2.purchase, 34200)

if __name__ == "__main__":
    unittest.main()