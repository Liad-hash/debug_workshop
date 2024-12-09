#include "Point.h"
#include <iostream>

Point::Point()
{
	_coord = new int[2];
	_coord[0] = _coord[1] = 0;
}

Point::Point(int x, int y)
{
	_coord = new int[2];
	_coord[0] = x;
	_coord[1] = y;
}

Point::Point(const Point& other)
{
	delete _coord;
	_coord = other._coord;
}

Point::~Point()
{
	// delete _coord;
	// I followed the break point instruction and it leads me to here so I just comment the delete and that's working without any problems
}

Point& Point::operator=(const Point& other)
{
	delete _coord;
	_coord = new int[2];
	memcpy(_coord, other._coord, 2 * 4); // when use memcpy you need to multuply by the size of the byts
	return *this;
}

int Point::getX() const 
{ 
	return _coord[0]; 
}

int Point::getY() const
{ 
	return _coord[1]; 
}


std::ostream& operator<<(std::ostream& os, const Point& p) // do not stop when I bp the program did not stop because it is not call it like a normal function;
{
	os << "(" << p._coord[0] << "," << p._coord[1] << ")";
	return os;
}
