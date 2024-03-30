import pyglet

window = pyglet.window.Window(
    width=500, height=500, caption="Drawing on clicked point", resizable=True
)

Img = pyglet.image.load("image.jpg")


@window.event
def on_mouse_press(x, y, button, modifiers):
    Img.blit(x, y)


pyglet.app.run()
