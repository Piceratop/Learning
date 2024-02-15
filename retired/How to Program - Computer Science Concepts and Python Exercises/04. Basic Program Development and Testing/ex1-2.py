# Get information from user
print("I'll help you determine how long you will need to save.")
name = input("What's your name? ")
item = input("What is it you are saving up for? ")
total_cost = float(
    input("OK, " + name + ". Please enter the cost of the " + item + ": ")
)
saved = float(input("How much have you saved? "))
balance = total_cost - saved
frequency = ""
if balance < 0:
    print("Looks like you already have saved enough!")
    balance = 0
    payment = 1
else:
    payment = float(input("Enter how much you will save each period: "))
    frequency = input("Enter how often you will save: ")

    if payment <= 0:
        payment = float(
            input("Savings must be positive. Please enter a positive value: ")
        )
        if payment <= 0:
            print(
                name
                + ", you still don't enter a positive number! I am going to just assume you save 1 per period."
            )
            payment = 1
# Calculate number of payments that will be needed
num_remaining_payments = int(balance / payment)
if num_remaining_payments < balance / payment:
    num_remaining_payments = num_remaining_payments + 1
# Present information to user
print(
    name + ", you must make",
    num_remaining_payments,
    "more payments every " + frequency + ", and then you'll have your " + item + "!",
)
