from distutils.core import setup, Extension
from Cython.Build import cythonize
import os
DIRS = [root for root, _, _ in os.walk("C:/Users/QPan/PycharmProjects/Python_Test/test")]
ext = Extension(
                name="Rectangle",
                sources=["Rectangle_wrap.pyx", "./src/Rectangle.cpp", "./src/Shape.cpp", "./src/a.c"],
                language="c++",
                include_dirs=DIRS)
setup(ext_modules=cythonize(ext))