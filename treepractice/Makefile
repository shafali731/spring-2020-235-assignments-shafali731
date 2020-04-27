FLAGS=-std=c++14

main: main.o  BSTree.o Node.o challenges.o
	g++ $(FLAGS) -o main main.o Node.o BSTree.o challenges.o

tests: tests.o Node.o  BSTree.o
	g++ $(FLAGS) -o tests tests.o Node.o BSTree.o challenges.o

main.o: main.cpp Node.h BSTree.h challenges.h
	g++ $(FLAGS) -c main.cpp

Node.o: Node.cpp Node.h
	g++ $(FLAGS) -c Node.cpp
BSTree.o: BSTree.cpp BSTree.h
	g++ $(FLAGS) -c BSTree.cpp
challenges.o: challenges.cpp challenges.h
	g++ $(FLAGS) -c challenges.cpp


clean:
	rm Node.o main.o challenges.o BSTree.o  main
