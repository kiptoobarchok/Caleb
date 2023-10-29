#!/usr/bin/python3


def test_sum():
    assert sum([1, 2, 3]) == 6, "should be 6"

def test_sum2():
    assert sum([1, 2, 3]) == 10, "should be 6"

if __name__ == "__main__":
    test_sum()
    test_sum2()
    print("everything passed!!")