with open("data.txt", "r") as numbers_file:
    sum = 0
    count = 0
    for n in numbers_file:
        sum += int(n)
        count += 1

print(sum / count)
