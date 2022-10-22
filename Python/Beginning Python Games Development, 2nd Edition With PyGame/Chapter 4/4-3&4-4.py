#  Function for Scaling a Color
def scale_color(color, scale):
    red, green, blue = color
    red = int(red*scale)
    green = int(green*scale)
    blue = int(blue*scale)
    return red, green, blue


fireball_orange = (221, 99, 20)
print(fireball_orange)
print(scale_color(fireball_orange, .5))

#  Function for Saturating a Color
def saturate_color(color):
  red, green, blue = color
  red = min(red, 255)
  green = min(green, 255)
  blue = min(blue, 255)
  return red, green, blue

