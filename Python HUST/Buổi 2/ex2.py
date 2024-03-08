"""Exercise 2: Longest Word"""

sentence = input("Enter a sentence: ")
words = sentence.split()
longest_words = [words[0]]
max_length = len(words[0])

for word in words[1:]:
    if len(word) > max_length:
        longest_words = [word]
        max_length = len(word)
    elif len(word) == max_length:
        longest_words.append(word)

print("Longest word(s):", ", ".join(longest_words))
