# distutils: language = c++

cdef extern from "io.c":
    void ReadInputFile()

cpdef ReadInput():
    ReadInputFile()

