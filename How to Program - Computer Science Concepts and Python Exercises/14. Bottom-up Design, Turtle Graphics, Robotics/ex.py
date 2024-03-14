import turtle

# Initialize a turtle instance
t = turtle.Turtle()


def drawA():
    t.left(60)
    t.forward(80)
    t.backward(50)
    t.right(60)
    t.forward(50)
    t.right(60)
    t.backward(50)
    t.forward(80)
    t.left(60)
    t.penup()
    t.forward(10)


drawA()

input()
