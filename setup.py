from setuptools import setup, Extension
import os

svf_module = Extension(
    "svfmodule",
    sources=[
        os.path.join("PySVF", "special_funcs.c"),
        os.path.join("PySVF", "svfmodule.c"),
        ],
    include_dirs=["PySVF"],
    libraries=["m"],
    extra_compile_args=["-std=c99"],
)

setup(
    name="pysvf",
    version="0.1",
    description="A Python Module for SVF",
    author="German Alfaro",
    url="https://github.com/geralfaro/PySVF",
    py_modules=["pysvf"],
    ext_modules=[svf_module],
)
