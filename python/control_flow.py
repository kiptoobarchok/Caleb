#if , else if, if - elif - else

age = int(input("enter ur age: "))

if (age >= 18):
    print("eligible for driving")
    if (age >= 65):
        print("Drive slowly")
else:
    print("not eligible for drving. Sorry , wait till u'r 18")

#else , elif

day = input("Enter the day of the week: ")

if (day == 'monday'):
    print("1st day")
elif (day == 'tuesday'):
    print("2nd day")
elif (day == 'wednesday'):
    print("3rd day")
elif (day == 'thursday'):
    print("4th day")
elif (day == 'friday'):
    print("5th day")
elif (day == 'saturday'):
    print("6th day")
elif (day == 'sunday'):
    print("last day")

else:
    print("not a day in a week.  \
        Maybe try using all lowercase letters ")


#check for positive or -ve int

num = int(input("Enter the int to be evaluated : "))

if (num < 0):
    print("negative")
elif (num == 0):
    print("is zero / neutral")
elif (num > 0):
    print("positive")

