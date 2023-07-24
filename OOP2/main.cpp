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

	void Print() const // �� const�� �������ؾ� ��� �ν��Ͻ� ��밡��
	{
		std::cout << mValue1 << ", " << mValue2 << std::endl;
	}
};

int main()
{
	const MyClass c1{ 2, 2 };

	c1.mValue1;
	c1.Change(1, 1); // �ȵǴ� ����: �ʱ�ȭ���� ��� ���氡��
	c1.Print();

}