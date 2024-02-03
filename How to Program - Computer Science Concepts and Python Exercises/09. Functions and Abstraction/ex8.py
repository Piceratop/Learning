def median(x, y, z):
    if x <= y <= z:
        return y
    elif z <= y <= x:
        return y
    elif x <= z <= y:
        return z
    elif y <= z <= x:
        return z
    elif z <= x <= y:
        return x
    elif y <= x <= z:
        return x


print(median(2, 3, 1))
