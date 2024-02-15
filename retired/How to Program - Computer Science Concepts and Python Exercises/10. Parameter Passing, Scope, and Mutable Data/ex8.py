def increase_list(inp_list):
    for i in range(len(inp_list)):
        inp_list[i] += 1


list = [1, 2, 3]
print("Before:")
print(list)
print("After:")
increase_list(list)
print(list)
