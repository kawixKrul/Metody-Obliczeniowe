CFLAGS = -Wall -g
CXX = gcc

files = lab1

.PHONY: clean all countdown

all: $(files)

lab1: lab1.o
	$(CXX) $^ -o $@	

lab1.o: lab1.c
	$(CXX) -c $< -o $@ $(CFLAGS)

clean:
	rm -rf *.o *.out