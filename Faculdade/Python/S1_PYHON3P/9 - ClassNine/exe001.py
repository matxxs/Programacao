import turtle

tela = turtle.Screen()
tartaruga = turtle.Turtle()

tartaruga.shape("circle")
tartaruga.color("red")

for _ in range(4):
    tartaruga.forward(100)
    tartaruga.left(90)

tela.mainloop()
