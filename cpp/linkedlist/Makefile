CC = clang++
CFLAGS = -O -g -Wall

all: build run clean

build: main.o linkedlist.o
	$(CC) $(CFLAGS) -o app.out main.o linkedlist.o

run: app.out
	@./app.out

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

linkedlist.o: linkedlist.cpp
	$(CC) $(CFLAGS) -c linkedlist.cpp

clean:
	@rm -fv *.o app.out
