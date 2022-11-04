CC := g++
FLAGS := -Wall

all: main

intruso:
	$(CC) $(FLAGS) -c intruso.cpp -o intruso.o

main: intruso
	$(CC) $(FLAGS) intruso.o main.cpp -o main.out

run: 
	./main.out

clean:
	clear
	rm -r *.o *.out