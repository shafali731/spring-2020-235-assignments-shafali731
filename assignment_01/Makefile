FLAGS=-std=c++14

main: main.o Node.o List.o
	g++ $(FLAGS) -o main main.o Node.o List.o

tests: tests.o Node.o List.o
	g++ $(FLAGS) -o tests tests.o Node.o List.o

main.o: main.cpp Node.h List.h
	g++ $(FLAGS) -c main.cpp

Node.o: Node.cpp Node.h
	g++ $(FLAGS) -c Node.cpp
List.o: List.cpp List.h
	g++ $(FLAGS) -c List.cpp
tests.o: tests.cpp Node.h List.h
	g++ $(FLAGS) -c tests.cpp

clean:
	rm Node.o List.o main.o tests.o  main tests
