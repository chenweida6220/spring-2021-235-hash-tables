OBJECTS=main.o List.o Node.o
CXXFLAGS=
LDFLAGS=
CXX=g++

main: main.o List.o Node.o
	$(CXX) -o main $(OBJECTS)

tests: test.o
	g++ -o tests tests.o

tests.o: tests.cpp doctest.h
	g++ -c tests.cpp

main.o: main.cpp List.h

List.o: List.cpp List.h Node.h

Node.o: Node.cpp Node.h


clean:
	rm -f $(OBJECTS)
