OBJECTS=List.o Node.o HTable.o
CXXFLAGS=
LDFLAGS=
CXX=g++

main: main.o $(OBJECTS)
	$(CXX) -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	$(CXX) -o tests tests.o $(OBJECTS)

tests.o:  tests.cpp doctest.h List.h HTable.h

main.o: main.cpp List.h HTable.h

List.o: List.cpp List.h Node.h

HTable.o: HTable.cpp HTable.h

Node.o: Node.cpp Node.h


clean:
	rm -f $(OBJECTS) main tests a.out
