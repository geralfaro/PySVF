# distutils: language = c++

cdef extern from "io.c":
    void ReadInputFile(char *)

cpdef ReadInput():
    ReadInputFile("asd.dat")

