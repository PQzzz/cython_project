from distutils.core import setup, Extension
from Cython.Build import cythonize
import os
DIRS = [root for root, _, _ in os.walk("C:/Users/QPan/PycharmProjects/Python_Test/test")]

# os.environ["CC"] = 'C:/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_win32/bin/arm-linux-gnueabihf-gcc.exe'
# os.environ['CXX'] = 'C:/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_win32/bin/arm-linux-gnueabihf-g++.exe'
# os.environ['CFLAGS'] = '-std=c++11'
# os.environ['LDLAGS'] = 'C:/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_win32/arm-linux-gnueabihf/lib'
# os.environ['CXXFLAGS'] = ' -std=c++11'
# os.environ['AR'] = 'C:/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_win32/bin/arm-linux-gnueabihf-ar.exe'
# os.environ['ARFLAGS'] = 'rv'

ext = Extension(
                name="Rectangle",
                sources=["Rectangle_wrap.pyx"],
                language="c++",
                include_dirs=DIRS,
                extra_objects=["./build/temp.win-amd64-3.7/Release/src/a", "./build/temp.win-amd64-3.7/Release/src/Rectangle", "./build/temp.win-amd64-3.7/Release/src/Shape"]
)
setup(ext_modules=cythonize(ext))