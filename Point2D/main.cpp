#include <iostream>
#include "Point2D.h"

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
//		std::cout << "[������]" << std::endl;
//	}
//
//	~MyClass()
//	{
//		std::cout << "[�Ҹ���]" << std::endl;
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
//	std::cout << sizeof(Monster) << std::endl; // 8����Ʈ ���´� -> ��������� 2���ۿ� ���
//}

class ClassA
{
public:
	ClassA()
	{
		std::cout << "A����" << std::endl;
	}
	~ClassA()
	{
		std::cout << "A�Ҹ�" << std::endl;
	}
};

class ClassB
{
	ClassA mA;
public:
	ClassB()
	{
		std::cout << "B����" << std::endl;
	}
	~ClassB()
	{
		std::cout << "B�Ҹ�" << std::endl;
	}
};

int main()
{
	ClassB myClass;
}