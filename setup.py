#from setuptools import setup
from distutils.core import setup, Extension
from Cython.Build import cythonize
from Cython.Distutils import build_ext
from os.path import join, dirname
import numpy

#setup(ext_modules = cythonize('PySVF/*.pyx'))#Levanta todos los "pyx"
src = ["io_c.pyx","io.c"]
src = [join('PySVF', x) for x in src]

dep = ["allvars.h","proto.h"]
dep = [join('PySVF', x) for x in dep]


setup(cmdclass={'build_ext':build_ext}, ext_modules=[Extension('io_c', sources=src,depends=dep,include_dirs=[numpy.get_include()])])



#setup(ext_modules = cythonize('Examples/*.pyx'))#Examples:"hello_word.c"y"rectangle.c"
