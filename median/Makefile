FLAGS=-std=c++14

main: main.o MinHeap.o MaxHeap.o
	g++ $(FLAGS) -o main main.o MinHeap.o MaxHeap.o

tests: tests.o MinHeap.o MaxHeap.o
	g++ $(FLAGS) -o tests tests.o MinHeap.o MaxHeap.o

main.o: main.cpp  MinHeap.h MaxHeap.h
	g++ $(FLAGS) -c main.cpp

MinHeap.o: MinHeap.o MinHeap.h
	g++ $(FLAGS) -c MinHeap.cpp

MaxHeap.o: MaxHeap.o MaxHeap.h
	g++ $(FLAGS) -c MaxHeap.cpp

tests.o: tests.cpp  MinHeap.h MaxHeap.h
	g++ $(FLAGS) -c tests.cpp

clean:
	rm main.o tests.o MinHeap.o MaxHeap.o main tests
