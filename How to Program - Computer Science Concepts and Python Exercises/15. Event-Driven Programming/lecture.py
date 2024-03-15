import pyglet

window = pyglet.window.Window(width=400, height=300, caption="TestWindow")

label = pyglet.text.Label(
    "Howdy!", font_name="Times New Roman", font_size=18, x=50, y=150
)


@window.event
def on_draw():
    window.clear()
    label.draw()


pyglet.app.run()
