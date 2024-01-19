# Cholesterol

LDL = int(input("LDL: "))
HDL = int(input("HDL: "))
TRI = int(input("TRI: "))

total = LDL + HDL + (TRI/5.0)
if (LDL < 100) and (HDL > 60) and (TRI < 150) and (total < 200):
   print ("Cholesterol looks great!")
elif (LDL > 130) or (HDL < 50) or (TRI > 200) or (total > 240):
   print ("Warning: Cholesterol looks bad!")
else:
   print ("Borderline cholesterol problems.")