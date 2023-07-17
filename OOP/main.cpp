#include <iostream>
#include "Player.h"

// 프로시쥬얼 프로그래밍에서는 동일한 매개변수가 필요한경우가 반드시 있다. 전역변수로도 1개 밖에 처리가 불가능. 이를 oop를 통해서 페러다임을 바꿈
// 단점: 1)호출스택
// 2)동일한 자료구조 타입을 매번 매개변수로 넘겨줘야 합니다.
// ->자료구조와 함수가 분리되어 있어서 (이런 불편함이 생기는 것)

// Object Oriented Programming (OOP : 객체 지향 프로그래밍)
// ->자료구조와 함수를 통합
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
//		std::cout << "따르릉" << std::endl;
//	}
//	void Message()
//	{
//		std::cout << "메시지" << std::endl;
//	}
//};
//
//int main()
//{
//	// Instantiate (인스턴스화)
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
//	// const int GetTemperature() 반환값이 상수인경우이므로 이건 아니고
//
//	int GetTemperature() const // 처음보는 형태로 '멤버함수'만 가능하다. 멤버함수가 상수이다. 정확히는 this에 숨어있는 멤버 변수(?)의 값을 바꿀수 없다는 뜻
//	{
//		return mTemperature;
//	}
//};
//
//class Calendar // Getter + Setter = 속성
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
//	myHouse.GetTemperature(); // GetTemperature를 써도 myhouse라는 인스턴스 내부의 값은 변하지 않는다는걸 약속하는 것
//}

int main()
{
	Dimension myDimension{};
	int x{}, y{};

	std::cout << "x좌표 값과 y좌표 값 입력(정수): ";
	std::cin >> x >> y;
	myDimension.Input(x, y);
	std::cout << "> Print" << std::endl;
	myDimension.Print();
	std::cout << "> Distance" << std::endl;
	myDimension.Distance();
}