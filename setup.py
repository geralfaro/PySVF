from setuptools import setup
from Cython.Build import cythonize

setup(ext_modules = cythonize('PySVF/*.pyx'))#Levanta todos los "pyx"
#setup(ext_modules = cythonize('Ejemplos/*.pyx'))#Levanta Ej:"hello_word.c"y"rectangle.c"
