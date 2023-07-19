#include <iostream>
//#include "Point2D.h"

//int main()
//{
//	Point2D p1;
//
//	p1.Set(3, 3);
//	p1.Print();
//	std::cout << p1.Distance() << std::endl;
//}


//class MyClass
//{
//public:
//	MyClass()
//	{
//		std::cout << "[생성자]" << std::endl;
//	}
//
//	~MyClass()
//	{
//		std::cout << "[소멸자]" << std::endl;
//	}
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//}
//
//int main()
//{
//	std::cout << "--- start ---" << std::endl;
//	
//	MyClass c1;
//
//	MyClass* c2 = new MyClass;
//
//	delete c2;
//
//	std::cout << "--- end ---" << std::endl;
//}


//class Monster
//{
//private:
//	int mHealth;
//	int mLevel;
//
//public:
//	// default constructor
//	Monster()
//	{
//		mHealth = 1;
//		mLevel = 1;
//	}
//	
//	void Print()
//	{
//		std::cout << "Health : " << mHealth << std::endl;
//		std::cout << "Level : " << mLevel << std::endl;
//	}
//
//};
//
//int main()
//{
//	Monster m1;
//
//	m1.Print();
//
//	std::cout << sizeof(Monster) << std::endl; // 8바이트 나온다 -> 멤버변수가 2개밖에 없어서
//}

//class ClassA
//{
//public:
//	ClassA()
//	{
//		std::cout << "A생성" << std::endl;
//	}
//	~ClassA()
//	{
//		std::cout << "A소멸" << std::endl;
//	}
//};
//
//class ClassB
//{
//	ClassA mA;
//public:
//	ClassB()
//	{
//		std::cout << "B생성" << std::endl;
//	}
//	~ClassB()
//	{
//		std::cout << "B소멸" << std::endl;
//	}
//};
//
//int main()
//{
//	ClassB myClass;
//}

// 동적배열 - 래퍼 클래스, 캡슐화의 장점 + delete 일일히 신경쓸 필요도 없는 장점
class MyArray
{
private:
	int* mArray;
	int mLength;

public:
	MyArray(int len) : mLength{len}, mArray{new int [len]{}}
	{
		//mArray = new int [len] {};
	}

	~MyArray()
	{
		delete[] mArray;
	}
};

int main()
{
	MyArray array{ 100 };
}