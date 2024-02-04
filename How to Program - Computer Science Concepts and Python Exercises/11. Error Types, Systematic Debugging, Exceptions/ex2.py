def findmiddle(a):
    if len(a) < 3:
        raise TypeError
    if ((a[0] >= a[1]) and (a[1] >= a[2])) or ((a[0] <= a[1]) and (a[1] <= a[2])):
        return a[1]
    elif ((a[0] >= a[2]) and (a[2] >= a[1])) or ((a[0] <= a[2]) and (a[2] <= a[1])):
        return a[2]
    else:
        return a[0]


try:
    print(findmiddle([1, 2, 3]))
    print(findmiddle([3, 2]))
except TypeError:
    print("Error")
