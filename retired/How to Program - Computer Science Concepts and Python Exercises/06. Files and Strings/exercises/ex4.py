infile = open("data.txt", "r", encoding="utf-8")

# Solution 1
linefromfile = infile.readline()
while linefromfile != "":
    print(linefromfile)
    linefromfile = infile.readline()

infile.close()

infile = open("data.txt", "r", encoding="utf-8")

# Solution 2
for linefromfile in infile:
    print(linefromfile)

infile.close()
