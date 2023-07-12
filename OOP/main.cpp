#include <iostream>

// ���ν���� ���α׷��ֿ����� ������ �Ű������� �ʿ��Ѱ�찡 �ݵ�� �ִ�. ���������ε� 1�� �ۿ� ó���� �Ұ���. �̸� oop�� ���ؼ� �䷯������ �ٲ�
// ����: 1)ȣ�⽺��
// 2)������ �ڷᱸ�� Ÿ���� �Ź� �Ű������� �Ѱ���� �մϴ�.
// ->�ڷᱸ���� �Լ��� �и��Ǿ� �־ (�̷� �������� ����� ��)

// Object Oriented Programming (OOP : ��ü ���� ���α׷���)
// ->�ڷᱸ���� �Լ��� ����
//

class Galaxy
{
	// state - member variable
private:
	char modelName[10];

public:
	int color;
	int weight;

	// behavior - member function
	void Phone()
	{
		std::cout << "������" << std::endl;
	}
	void Message()
	{
		std::cout << "�޽���" << std::endl;
	}
};

int main()
{
	// Instantiate (�ν��Ͻ�ȭ)
	Galaxy myPhone;

	myPhone.color = 1;
	myPhone.Phone();
}

class Computer
{
public:
	int price;
	int color;

private:
	int power;
	char mainboard[];

	void PowerSign()
	{
		std::cout << power << std::endl;
	}

public:
	void PriceSign()
	{
		std::cout << price << std::endl;
	}

};