n = int(input("Enter a number: "))
print(n)

count = 0
while n != 1:
    count += 1
    if n % 2 == 0:
        n = n / 2
    else:
        n = 3 * n + 1
    print(n)

print("We reached 1 in", count, "steps.")
