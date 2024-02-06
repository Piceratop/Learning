import random

while True:
    secretnum = random.randint(1, 100)
    numguesses = 0
    guessed = False
    while not guessed:
        guess = int(input("Enter a guess from 1 to 100: "))
        numguesses += 1
        if guess == secretnum:
            print("You guessed it! It took you", numguesses, "tries!")
            guessed = True
        elif guess < secretnum:
            print("Too low! Try again.")
        else:
            print("Too high! Try again.")
