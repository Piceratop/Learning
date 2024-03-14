year = int(input("Year: "))

# Part a
if (year % 4 == 0):
   if (year % 100 == 0):
      if (year % 400 == 0):
         print("Leap year")
      else:
         print("Not a leap year")
   else:
      print("Leap year")
else:
   print("Not a leap year")

# Part b
if (year % 400 == 0):
   print("Leap year")
elif (year % 100 == 0):
   print("Not a leap year")
elif (year % 4 == 0):
   print("Leap year")
else:
   print("Not a leap year")

# Part c
if (year % 4 != 0) or (year % 100 == 0 and year % 400 != 0):
   print("Not a leap year")
else:
   print("Leap year")