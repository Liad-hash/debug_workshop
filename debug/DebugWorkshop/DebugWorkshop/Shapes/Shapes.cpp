#include "shape.h"
#include "triangle.h"
#include <iostream>


int main() 
{
	Triangle triangle(2, 10);
	std::cout << "The area of the triangle is " << triangle.get_area() << std::endl;

	Triangle* pTriangle = new Triangle(2, 10); // the default area of "shape" if 0 so I change it to be a trinagle object and that's working
	std::cout << "The area of the triangle is " << pTriangle->get_area() << std::endl;
	delete pTriangle;

	return 0;
}
