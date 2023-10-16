CC=g++

.PHONY: clean

all: r3

r3: VectorR3.h r3.cpp
	$(CC) VectorR3.h r3.cpp -o r3

clean:
	rm -f r3
