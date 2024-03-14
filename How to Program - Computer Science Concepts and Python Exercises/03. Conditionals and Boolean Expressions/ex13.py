# Reasonable cost

total_cost = 100.00
days = 3

cost_per_day = total_cost / days

if (cost_per_day > 40):
   print("Too expensive")
elif (cost_per_day > 30):
   print("Reasonable cost")
elif (cost_per_day > 20):
   print("Excellent cost")
else:
   print("Incredible bargain")