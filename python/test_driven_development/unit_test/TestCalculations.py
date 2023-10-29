#!/usr/bin/python3
import sys
import unittest
from my_calculations import Calculations


class testCalculations(unittest.TestCase):
    def test_sum(self):
        calculation = Calculations(2, 3)
        self.assertEqual(calculation.get_sum(), 5, "The sum is wrong")

    def test_diff(self):
        calculation = Calculations(4, 3)
        self.assertEqual(calculation.get_diff(), 1, "incorrect ")

    def test_product(self):
        a = Calculations(2, 3)
        self.assertEqual(a.get_product(), 6, "wrong multiplication")

    def test_div(self):
        a = Calculations(4, 2)
        self.assertEqual(a.get_div(), 2, "wrong division bruh")

    def test_mod(self):
        a = Calculations(3, 2)
        self.assertEqual(a.get_mod(), 2, "wrong calculation")


if __name__ == "__import__":
    unittest.main()