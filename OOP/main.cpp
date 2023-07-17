#include <iostream>
#include "Player.h"

// ���ν���� ���α׷��ֿ����� ������ �Ű������� �ʿ��Ѱ�찡 �ݵ�� �ִ�. ���������ε� 1�� �ۿ� ó���� �Ұ���. �̸� oop�� ���ؼ� �䷯������ �ٲ�
// ����: 1)ȣ�⽺��
// 2)������ �ڷᱸ�� Ÿ���� �Ź� �Ű������� �Ѱ���� �մϴ�.
// ->�ڷᱸ���� �Լ��� �и��Ǿ� �־ (�̷� �������� ����� ��)

// Object Oriented Programming (OOP : ��ü ���� ���α׷���)
// ->�ڷᱸ���� �Լ��� ����
//

//class Galaxy
//{
//	// state - member variable
//private:
//	char modelName[10];
//
//public:
//	int color;
//	int weight;
//
//	// behavior - member function
//	void Phone()
//	{
//		std::cout << "������" << std::endl;
//	}
//	void Message()
//	{
//		std::cout << "�޽���" << std::endl;
//	}
//};
//
//int main()
//{
//	// Instantiate (�ν��Ͻ�ȭ)
//	Galaxy myPhone;
//
//	myPhone.color = 1;
//	myPhone.Phone();
//}
//
//class Computer
//{
//public:
//	int price;
//	int color;
//
//private:
//	int power;
//	char mainboard[];
//
//	void PowerSign()
//	{
//		std::cout << power << std::endl;
//	}
//
//public:
//	void PriceSign()
//	{
//		std::cout << price << std::endl;
//	}
//
//};

//struct Mystruct
//{
//	int x;
//
//	void Print()
//	{
//		std::cout << x << std::endl;
//	}
//};
//
//int main()
//{
//	Mystruct s1;
//
//	s1.x = 10;
//	s1.Print();
//}

//class AirConditioner
//{
//	int mTemperature;
//
//public:
//	// const int GetTemperature() ��ȯ���� ����ΰ���̹Ƿ� �̰� �ƴϰ�
//
//	int GetTemperature() const // ó������ ���·� '����Լ�'�� �����ϴ�. ����Լ��� ����̴�. ��Ȯ���� this�� �����ִ� ��� ����(?)�� ���� �ٲܼ� ���ٴ� ��
//	{
//		return mTemperature;
//	}
//};
//
//class Calendar // Getter + Setter = �Ӽ�
//{
//private:
//	int mMonth;
//
//public:
//	void SetMonth(std::string m)
//	{
//		// Dec -> 12
//		mMonth = 12;
//	}
//
//	std::string GetMonth()
//	{
//		// 1 - Jan
//		// 2 - Feb
//		return "january";
//	}
//};
//
//int main()
//{
//	Player wolf;
//
//	wolf.GetAttack();
//
//	Player::Sword s1;
//	Player::Costume costume = Player::Costume::Summer;
//
//	AirConditioner myHouse;
//	myHouse.GetTemperature(); // GetTemperature�� �ᵵ myhouse��� �ν��Ͻ� ������ ���� ������ �ʴ´ٴ°� ����ϴ� ��
//}

int main()
{
	Dimension myDimension{};
	int x{}, y{};

	std::cout << "x��ǥ ���� y��ǥ �� �Է�(����): ";
	std::cin >> x >> y;
	myDimension.Input(x, y);
	std::cout << "> Print" << std::endl;
	myDimension.Print();
	std::cout << "> Distance" << std::endl;
	myDimension.Distance();
}