# 9 12
def something5(a):
    sum1 = 0
    sum2 = 0
    for i in range(len(a)):
        if i % 2 == 0:
            sum1 += a[i]
        else:
            sum2 += a[i]
    return sum1, sum2


x, y = something5([1, 2, 3, 4, 5, 6])
print(x, y)
