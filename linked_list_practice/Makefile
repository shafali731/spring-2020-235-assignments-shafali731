FLAGS=-std=c++14

main: main.o  Node.o funcs.o
	g++ $(FLAGS) -o main main.o Node.o funcs.o

tests: tests.o Node.o funcs.o
	g++ $(FLAGS) -o tests tests.o Node.o funcs.o

main.o: main.cpp Node.h funcs.h
	g++ $(FLAGS) -c main.cpp

Node.o: Node.cpp Node.h
	g++ $(FLAGS) -c Node.cpp
funcs.o: funcs.cpp funcs.h
	g++ $(FLAGS) -c funcs.cpp

tests.o: tests.cpp Node.h funcs.h
	g++ $(FLAGS) -c tests.cpp

clean:
	rm Node.o funcs.o main.o tests.o  main tests
