def countchar(ch, teststring):
    count = 0
    for i in range(len(teststring)):
        if teststring[i] == ch:
            count += 1
    return count


print(countchar("e", "The quick brown fox jumps over the lazy dog."))
