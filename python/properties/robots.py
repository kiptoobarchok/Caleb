#!/usr/bin/python3


class robot:
    def __init__(self, name, build_yr, lk = 0.5, lp = 0.5):
        self.name = name
        self.build_yr = build_yr
        self.__physical = lk
        self.__pyschic = lp

    @property
    def condition(self):
        state = self.__physical + self.__pyschic

        if state <= -1:
            return (f"{self.name} is miserable")
        elif state <= 0:
            return (f"{self.name} feels bad")
        elif state <= 0.5:
            return (f"{self.name} could be worse")
        elif state <= 1:
            return (f"{self.name} seems to be okay")
        else:
            return (f"{self.name} is in perfect condition")
        
if __name__ == "__main__":
    x = robot("RGDX", 2018, 0.2, 0.4)
    y = robot("RGDX-2", 2023, 0.6, 0.7)

    print(x.condition)
    print(y.condition)