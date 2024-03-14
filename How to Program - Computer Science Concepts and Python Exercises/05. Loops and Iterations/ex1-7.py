# 10
# 5.0
# 2.5
# 1.25
i = 10
while i > 1:
    print(i)
    i /= 2

# 0
# 1
# 3
# 6
# 10
# 15
# 21
i = 0
value = 0
while value < 20:
    value += i
    i += 1
    print(value)

# 0
# 1
# 2
# 3
for i in range(4):
    print(i)

# 3
# 4
for i in range(3, 5):
    print(i)

# 1
# 4
# 7
for i in range(1, 10, 3):
    print(i)

#
for i in range(1, 10, -3):
    print(i)


# 10
# 7
# 4
for i in range(10, 1, -3):
    print(i)
