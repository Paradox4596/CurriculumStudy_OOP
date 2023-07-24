#include <iostream>

class MyClass
{
public:
	int mValue1;
	int mValue2;

	MyClass() : MyClass(1,1){}
	MyClass(int v1, int v2) : mValue1(v1), mValue2(v2) {}

	void Change(int x, int y)
	{
		mValue1 = x;
		mValue2 = y;
	}

	void Print() const // 이 const로 보장을해야 상수 인스턴스 사용가능
	{
		std::cout << mValue1 << ", " << mValue2 << std::endl;
	}
};

int main()
{
	const MyClass c1{ 2, 2 };

	c1.mValue1;
	c1.Change(1, 1); // 안되는 이유: 초기화때만 상수 변경가능
	c1.Print();

}