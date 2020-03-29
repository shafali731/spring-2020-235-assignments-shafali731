FLAGS=-std=c++14

main: main.o Node.o QueueA.o
	g++ $(FLAGS) -o main main.o Node.o QueueA.o

tests: tests.o Node.o QueueA.o
	g++ $(FLAGS) -o tests tests.o Node.o QueueA.o

main.o: main.cpp Node.h QueueA.h
	g++ $(FLAGS) -c main.cpp 

Node.o: Node.cpp Node.h
	g++ $(FLAGS) -c Node.cpp
QueueA.o: QueueA.cpp QueueA.h
	g++ $(FLAGS) -c QueueA.cpp
tests.o: tests.cpp Node.h QueueA.h
	g++ $(FLAGS) -c tests.cpp

clean:
	rm Node.o QueueA.o main.o tests.o  main tests
