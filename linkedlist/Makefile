CC = clang++
CFLAGS = -O

all: build run

build: main.o linkedlist.o
	$(CC) $(CFLAGS) -o ../bin/app main.o linkedlist.o

run: ../bin/app
	@../bin/app

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

linkedlist.o: linkedlist.cpp
	$(CC) $(CFLAGS) -c linkedlist.cpp

clean:
	@rm -fv *.o
