"""Exercise 3: Normalize name"""

name = input("Enter a name: ")
normalized_name = " ".join(word.capitalize() for word in name.split())
print(f"Normalized name: {normalized_name}")
