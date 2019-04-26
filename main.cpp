/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	Test myTester;
	std::cout << "Running...\n" << '\n';
	myTester.runTests();

	std::cout << "\n...And we're done.\nGoodbye.\n";

	return (0);

}
