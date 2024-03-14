names = []
ages = []
name = input("Enter a person's name, or 'stop' to stop: ")
while name != "stop":
    age = int(input("What is the age of " + name + "? "))
    names.append(name)
    ages.append(age)
    name = input("Enter a person's name, or 'stop' to stop: ")

maxindex = 0
for i in range(1, len(ages)):
    if ages[i] > ages[maxindex]:
        maxindex = i

print("The oldest person is", names[maxindex])
