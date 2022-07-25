def calculate(num):
    a = 0
    b = 1
    total = 0
    while a < num:
        if a % 2 == 0:
            total += a
        a, b = b, a + b
    return total


print(calculate(1000000))
