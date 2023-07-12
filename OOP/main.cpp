#include <iostream>

// 프로시쥬얼 프로그래밍에서는 동일한 매개변수가 필요한경우가 반드시 있다. 전역변수로도 1개 밖에 처리가 불가능. 이를 oop를 통해서 페러다임을 바꿈
// 단점: 1)호출스택
// 2)동일한 자료구조 타입을 매번 매개변수로 넘겨줘야 합니다.
// ->자료구조와 함수가 분리되어 있어서 (이런 불편함이 생기는 것)

// Object Oriented Programming (OOP : 객체 지향 프로그래밍)
// ->자료구조와 함수를 통합
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
		std::cout << "따르릉" << std::endl;
	}
	void Message()
	{
		std::cout << "메시지" << std::endl;
	}
};

int main()
{
	// Instantiate (인스턴스화)
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