# 21
def something4(a):
    sum = 0
    for b in a:
        if b < 0:
            sum -= b
        else:
            sum += b
    return sum


print(something4([2, -4, 3, -1, 7, -4]))
