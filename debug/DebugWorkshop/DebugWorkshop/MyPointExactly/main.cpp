#include "Point.h"
#include <iostream>


int main()
{
	Point p1(1, 2);
	Point p2 = p1;

	std::cout << "p1=" << p1 << std::endl; // just add p1 and p2
	std::cout << "p2=" << p2 << std::endl; // same thing as before

	return 0;
}
