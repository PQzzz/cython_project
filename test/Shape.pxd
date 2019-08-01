cdef extern from "Shape.hpp" nogil:
    cdef cppclass Shape:
        Shape()
        void getShape()