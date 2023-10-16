#!usr/bin/python3


class robot():
    count = 0
    def __init__(self, name):
        self.name = name
        print(f"initializing {self.name}")
        robot.count += 1

    def say_hi(self, name):
        self.name = name
        print(f"Hi ,I am {self.name}, a Robot")

    def die(self):
        print(f"{self.name} destroying")
        robot.count -= 1

        if robot.count == 0:
            print(f"{self.name} was the last one to be destroyed")

        else:
            print(f"{robot.count} robot(s) still working")

    @classmethod
    def total_robots(cls):
        if robot.count == 1:
            print(f"There is {robot.count} robot working")
        else:
            print(f"there are {robot.count} robots working")

a = robot("RGDX")
robot.total_robots()
b = robot("RGDX-2.0")
robot.total_robots()
c = robot("RGDX-2.1")
c.say_hi("RGDX-2.1")
robot.total_robots()

print('\n')
a.die()
robot.total_robots()
b.die()
robot.total_robots()
c.die()
robot.total_robots()

