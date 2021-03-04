IDIR = ../include
CC = g++
CFLAGS = -I$(IDIR)

ODIR = obj
LDIR = ../lib

LIBS = -lm

_DEPS = employee.hpp
DEPS := $(patsubst %,$(IDIR)/%,$(DEPS))

_OBJ = main.o employee.o
OBJ = $(patsubst &,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
        $(CC) -cpp -o $@ $< $(CFLAGS)

main: $(OBJ)
        $(CC) -o $A $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean: rm -f $(ODIR)/*.o*~ core $(INCRIR)/*~
