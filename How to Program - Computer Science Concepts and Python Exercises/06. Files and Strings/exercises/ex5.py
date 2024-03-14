file_name = input("Enter file name: ")
new_file = open(file_name + ".txt", "w")
for i in range(1, 11):
    new_file.write(str(i) + "\n")
new_file.close()
