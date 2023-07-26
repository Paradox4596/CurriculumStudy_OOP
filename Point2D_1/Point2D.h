#pragma once

class Point2D
{
	int mX;
	int mY;
		
public:
	Point2D();
	Point2D(int x, int y);
	void Print();

	friend Point2D operator + (Point2D x, Point2D y);
};

// Point2D + (Point2D x, Point2D y); �̰� �翬�� �ȵǴ°� ����
Point2D operator + (Point2D x, Point2D y);