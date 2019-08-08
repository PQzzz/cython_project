
import Rectangle

s_rect = Rectangle.PyRectangle.hello()
s_rect.dayin()
rect = Rectangle.PyRectangle(2, 5, 0x22, 0x11)
# x0, y0, x1, y1 = 1, 3, 5, 4
print(rect.getArea())
rect.move(1, 2)
rect.dayin()
size = rect.getSize()
print(size)
rect.getShape()


