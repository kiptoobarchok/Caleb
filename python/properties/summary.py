#!/usr/bin/python3

class OurClass:
    def __init__(self, OurAtt):
        self.__OurAtt = OurAtt

    @property
    def get_att(self):
        return self.__OurAtt

    @get_att.setter
    def set_att(self, value):
        if value < 0:
            self.__OurAtt = 0       
        elif value > 1000:
            self.__OurAtt = 1000
        else:
            self.__OurAtt = value

a = OurClass(12323)
print(a.get_att)
