a = 1
b = 2
c = 2
d = "One"
e = "Two"
f = "Three"
g = "one"

# False
print(a > b)

# False
print(a == b)

# True
print(a != b)

# True
print(b == c)

# True
print(d < e)

# False
print(e < f)

# True
print(d < g)

# False
print(g < e)

# True
print(not (a == b))

# False
print(b < c or b > c)

# True
print((a+1) == b and not b < c)

# True
print(((a <= b) and (b <= c)) or ((a >= b) and (b >= c)))