#include <iostream>
#include "Point2D.h"

Point2D::Point2D() : mX{}, mY{}
{
}

Point2D::Point2D(int x, int y) : mX {x}, mY {y}
{
}

void Point2D::Print()
{
	std::cout << "(" << mX << "," << mY <<
}

Point2D operator+(Point2D x, Point2D y)
{
	return Point2D();
}
