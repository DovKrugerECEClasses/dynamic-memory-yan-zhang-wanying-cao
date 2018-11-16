CXX	:=	g++ -std=c++11 -g

String: String.o main.o
	$(CXX) String.o main -o String

String.o: String.cc String.hh
	$(CXX) -c String.cpp

main.o: String.hh
	$(CXX) -c main.cpp


g++ -std=c++11 -g String.cpp
g++ -std=c++11 -g main.cpp
g++ mian.o String.o
./a.out