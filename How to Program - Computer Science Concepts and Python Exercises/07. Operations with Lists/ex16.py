ages = [8, 27, 30, 21, 24, 14, 9, 25, 11]
minor_ages = []
for age in ages:
    if age < 18:
        minor_ages.append(age)

print(minor_ages)
