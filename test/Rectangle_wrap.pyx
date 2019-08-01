from Rectangle cimport Rectangle

cdef class PyRectangle:
    cdef Rectangle *c_rect

    def __cinit__(self, int32_t x0, int32_t y0, int32_t x1, int32_t y1):
        self.c_rect = new Rectangle(x0, y0, x1, y1)

    def getArea(self):
        return self.c_rect.getArea()

    def getSize(self):
        cdef int width, height
        self.c_rect.getSize(width, height)
        return width, height

    def move(self, dx, dy):
        self.c_rect.move(dx, dy)

    def dayin(self):
        self.c_rect.dayin()

    def getShape(self):
        self.c_rect.getShape()

    def __dealloc__(self):
        del self.c_rect