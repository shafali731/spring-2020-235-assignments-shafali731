FLAGS=-std=c++14

main: main.o Node.o QueueLL.o
	g++ $(FLAGS) -o main main.o Node.o QueueLL.o

tests: tests.o Node.o QueueLL.o
	g++ $(FLAGS) -o tests tests.o Node.o QueueLL.o

main.o: main.cpp Node.h QueueLL.h
	g++ $(FLAGS) -c main.cpp

Node.o: Node.cpp Node.h
	g++ $(FLAGS) -c Node.cpp
QueueLL.o: QueueLL.cpp QueueLL.h
	g++ $(FLAGS) -c QueueLL.cpp
tests.o: tests.cpp Node.h QueueLL.h
	g++ $(FLAGS) -c tests.cpp

clean:
	rm Node.o QueueLL.o main.o tests.o  main tests
