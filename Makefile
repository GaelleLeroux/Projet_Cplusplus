CXXFLAGS=-g -O2 -Wall -Wextra -std=c++11
CXX=g++

all: main

main: main.o Pion.o Map.o
	${CXX} $^ -o $@

main.o: main.cpp Map.cpp Pion.cpp
Pion.o: Pion.cpp Pion.hpp
Map.o : Map.hpp Map.cpp

clean:
	rm -f *.o *~ main