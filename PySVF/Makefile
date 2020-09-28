#__________________________________________________________________
#                                                          Compiler
                                                  
CC = g++ 

#__________________________________________________________________
#                                                            OpenMP

OMP = -fopenmp
#__________________________________________________________________
#                                                            voro++
           
VORO_LIB = -L/usr/local/lib -lvoro++
VORO_INC = -I/usr/local/include/voro++

#__________________________________________________________________

EXEC = main.x

OBJS = allvars.o qromb.o tools.o io.o qsort.o grid.o finder.o \
       velocity.o profiles.o voronoi.o main.o

INCL = allvars.h proto.h Makefile

CFLAGS += $(OMP) $(VORO_INC) 

LIBS = $(VORO_LIB) -lm

$(EXEC): $(OBJS) 
	$(CC) $(OMP) $(OBJS) $(LIBS) -o $(EXEC)  

$(OBJS): $(INCL) 

clean:
	rm -f $(OBJS) $(EXEC) *~ 
