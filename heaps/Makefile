FLAGS=-std=c++14

main: main.o Heap.o
	g++ $(FLAGS) -o main main.o Heap.o

tests: tests.o Heap.o
	g++ $(FLAGS) -o tests tests.o Heap.o

main.o: main.cpp  Heap.h
	g++ $(FLAGS) -c main.cpp

Heap.o: Heap.cpp Heap.h
	g++ $(FLAGS) -c Heap.cpp

tests.o: tests.cpp  Heap.h
	g++ $(FLAGS) -c tests.cpp

clean:
	rm main.o tests.o Heap.o main tests
