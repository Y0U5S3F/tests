import turtle

# Set up the turtle
flag = turtle.Turtle()
flag.speed(0)
flag.penup()
flag.goto(-200, 100)
flag.pendown()

# Draw the red background
flag.color("red")
flag.begin_fill()
flag.forward(400)
flag.right(90)
flag.forward(200)
flag.right(90)
flag.forward(400)
flag.right(90)
flag.forward(200)
flag.end_fill()

# Draw the white square
flag.color("white")
flag.penup()
flag.goto(-100, 50)
flag.pendown()
flag.begin_fill()
for i in range(4):
    flag.forward(200)
    flag.right(90)
flag.end_fill()

# Draw the red maple leaf
flag.color("red")
flag.penup()
flag.goto(0, 0)
flag.pendown()
flag.begin_fill()
flag.left(45)
flag.forward(100)
flag.right(135)
flag.forward(100)
flag.right(135)
flag.forward(100)
flag.right(135)
flag.forward(100)
flag.right(135)
flag.forward(100)
flag.right(135)
flag.forward(100)
flag.right(135)
flag.forward(141)
flag.end_fill()

# Hide the turtle
flag.hideturtle()

# Keep the window open
turtle.done()