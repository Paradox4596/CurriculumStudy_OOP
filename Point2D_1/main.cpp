#include <iostream>
#include "Point2D.h"

int main()
{
	Point2D pt1{ 2,3 };
	Point2D pt2{ 3,4 };

	Point2D pt3 = pt1 + pt2;
	pt3.Print();

	Point2D pt4 = pt1 + pt2 + pt3;
	//pt1.Print();
	pt4.Print();

	Point2D pt5 = pt2 - pt1;
	pt5.Print();
}