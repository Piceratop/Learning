# Eligible for reduced benefits

age = 67
income = 10000
if (age > 70):
   if (income < 15000):
      print("Eligible for benefits")
   else:
      if (income < 20000):
         print("Eligible for reduced benefits")
      else:
         print("Not eligible for benefits")
else:
   if (income < 20000):
      print("Eligible for reduced benefits")
   else:
      print("Not eligible for benefits")