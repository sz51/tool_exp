IDIR = cudd-3.0.0/include

SOURCES = main.cpp smtbdd2bdd.cpp syn.cpp
OBJS = main.o smtbdd2bdd.o syn.o

GXX=g++
GXXFLAGS=-I $(IDIR) -std=c++11 -w -g


LDIR=cudd-3.0.0/lib
LIBS=-lcudd


bddexplicit: $(SOURCES)
	$(GXX) $(SOURCES) $(GXXFLAGS) -L $(LDIR) $(LIBS)
	$(GXX) -o bddexplicit $(SOURCES) $(GXXFLAGS) -L $(LDIR) $(LIBS)




.PHONY: bddexplicit
clean:
	rm  bddexplicit


