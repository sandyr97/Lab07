#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o Test.o
	g++ -g -Wall -std=c++11 main.o Test.o LinkedListOfInts.o -o prog


main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp

Test.o: Test.h Test.cpp LinkedListOfInts.h
	g++ -g -Wall -std=c++11 -c Test.cpp
#Add needed Test.o recipe and compiler command


#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog
