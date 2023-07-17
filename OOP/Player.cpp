#include <iostream>
#include "Player.h"

//void Player::Walk()
//{
//	std::cout << "Walk" << std::endl;
//}
//
//void Player::Run()
//{
//	Sword s1;
//	Costume costume = Summer;
//	
//	std::cout << "Run" << std::endl;
//}
//
//void Player::Jump()
//{
//	std::cout << "Jump" << std::endl;
//}

void Dimension::Input(int x, int y)
{
	mXvalue = x;
	mYvalue = y;
}

void Dimension::Distance() const
{
	double Num{};
	Num = mXvalue * mXvalue + mYvalue * mYvalue;
	std::cout.precision(10);
	Num = sqrt(Num);
	std::cout << Num << std::endl;
}

void Dimension::Print() const
{
	std::cout << '(' << mXvalue << ", " << mYvalue << ')' << std::endl;
}