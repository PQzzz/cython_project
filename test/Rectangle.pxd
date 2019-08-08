from stdint1 cimport *
from Shape cimport Shape


cdef extern from "<Rectangle.hpp>" namespace "shapes" nogil:
    cdef cppclass Rectangle(Shape):
        Rectangle() except +
        Rectangle(int32_t x0, int32_t y0, int64_t x1, int32_t y1) except +
        int x0, y0, x1, y1
        int getArea()
        void getSize(int32_t width, int32_t height)
        void move(int dx, int dy)
        void dayin()
        @staticmethod
        Rectangle* hello()

