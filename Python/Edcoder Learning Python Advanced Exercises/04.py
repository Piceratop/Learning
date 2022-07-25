def calculate(num):
    i = 2
    factors = []
    while i * i < num:
        if not num % i == 0:
            i += 1
        else:
            factors.append(i)
            num //= i
    if num > 1:
        factors.append(num)
    return factors


print(calculate(840))
