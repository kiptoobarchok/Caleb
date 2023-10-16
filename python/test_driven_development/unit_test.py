#!usr/bin/python3


import unittest

class test_str(unittest.TestCase):
    def test_upper(self):
        self.assertEqual('caleb'.upper(), 'CALEB')

    def test_isupper(self):
        self.assertTrue('FOO'.isupper())
        self.assertFalse('fOo'.isupper())

if __name__ == '__main__':
    unittest.main()