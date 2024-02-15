def smaller_list(a, b):
    c = a[:]
    for i in range(len(b)):
        if b[i] < a[i]:
            c[i] = b[i]
    return c


print(smaller_list([1, 5, 3], [4, 2, 6]))
