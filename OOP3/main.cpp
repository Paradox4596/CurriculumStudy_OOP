#include <iostream>

//void f()
//{
//	static int x = 1; // 한번 만들어진 후 끝까지 유지되는 변수
//
//	std::cout << x++ << std::endl;
//}
//
//int main()
//{
//	f(); f(); f(); // 인쇄는 어떻게 된다? 1 1 1 이 아니라 1 2 3 순서
//}

class MyClass
{
public:
	// 선언만 존재
	static int mValue1; // 처음 한번만 초기화하고 그 다음은 무시
	// 인스턴스가 아닌 클래스에 속한 클래스 변수
	void Print()
	{
		std::cout << mValue1 << std::endl;
	}
};

int MyClass::mValue1 = 0; // 맨 앞 static이 없어야 되는 형태

int main()
{
	MyClass c1;

	//c1.mValue1 = 1; <- 이표기법보다
	MyClass::mValue1 = 1; // 이 표기법이 나음
	c1.Print();

	MyClass c2;

	// c2.mValue1 = 2;
	MyClass::mValue1 = 2;
	c2.Print();
}