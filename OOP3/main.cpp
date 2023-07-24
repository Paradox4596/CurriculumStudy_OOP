#include <iostream>

//void f()
//{
//	static int x = 1; // �ѹ� ������� �� ������ �����Ǵ� ����
//
//	std::cout << x++ << std::endl;
//}
//
//int main()
//{
//	f(); f(); f(); // �μ�� ��� �ȴ�? 1 1 1 �� �ƴ϶� 1 2 3 ����
//}

class MyClass
{
public:
	// ���� ����
	static int mValue1; // ó�� �ѹ��� �ʱ�ȭ�ϰ� �� ������ ����
	// �ν��Ͻ��� �ƴ� Ŭ������ ���� Ŭ���� ����
	void Print()
	{
		std::cout << mValue1 << std::endl;
	}
};

int MyClass::mValue1 = 0; // �� �� static�� ����� �Ǵ� ����

int main()
{
	MyClass c1;

	//c1.mValue1 = 1; <- ��ǥ�������
	MyClass::mValue1 = 1; // �� ǥ����� ����
	c1.Print();

	MyClass c2;

	// c2.mValue1 = 2;
	MyClass::mValue1 = 2;
	c2.Print();
}