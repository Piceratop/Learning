secret_number = 7
number = 0

while number != secret_number:
    number = int(input("Enter a number: "))
    if number == secret_number:
        print("You guessed it!")
    elif number < secret_number:
        print("Too low. Try again.")
    else:
        print("Too high. Try again.")
