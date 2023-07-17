#pragma once


//class Player
//{
//public:	
//	class Sword
//	{
//		int mPrice;
//		int mAttack;
//	};
//	
//	enum Costume
//	{
//		Hunter = 1,
//		Summer = 2,
//		Winter = 3
//	};
//
//	/*int m_Health; 언리얼 표기 방법
//	int m_Attack;*/
//	
//private:
//	int mHealth;
//	int mAttack;
//
//public:
//	void Walk();
//	void Run();
//	void Jump();
//	int GetAttack()
//	{
//		if (mAttack < 0) // 중요하고 매우 좋은 기능이므로, 변수는 가급적 숨겨놓고 변수를 사용할수 있는 함수를 만드는 것이 좋다
//		{
//			std::cerr << "Something Wrong!" << std::endl;
//		}
//
//		// 레벨 보정 + 장비 보정
//		int factor = 1;
//
//		return mAttack * factor;
//	}
//};

class Dimension
{
private:
	int mXvalue;
	int mYvalue;

public:
	void Input(int x, int y);
	void Distance() const;
	void Print() const;
};