def calculate():
    return max([i * j for i in range(10, 100) for j in range(10, 100) if str(i * j) == str(i * j)[::-1]])


print(calculate())
