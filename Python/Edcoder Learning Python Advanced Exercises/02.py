def calculate(num):
    return sum([i for i in range(num) if i % 5 == 0 or i % 7 == 0])


print(calculate(100))
