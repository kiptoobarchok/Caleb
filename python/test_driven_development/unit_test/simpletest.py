#!usr/bin/python3


import unittest

class simpletest(unittest.TestCase):
    def test(self):
        a = 'a'
        b = 'b'
        self.assertEqual(a, b)


class OutComeTest(unittest.TestCase):
    def TestPass(self):
        return

    def testFail(self):
        self.assertFalse(True)

    def TestError(self):
        raise runtimeError("test error")