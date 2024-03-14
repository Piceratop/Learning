hidden_answer = 7
user_guess = int(input("Guess a number between 1 and 10: "))

if user_guess < hidden_answer:
   print("Too low")
elif user_guess > hidden_answer:
   print("Too high")
else:
   print("Exactly right")