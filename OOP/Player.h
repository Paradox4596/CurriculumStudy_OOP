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
//	/*int m_Health; �𸮾� ǥ�� ���
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
//		if (mAttack < 0) // �߿��ϰ� �ſ� ���� ����̹Ƿ�, ������ ������ ���ܳ��� ������ ����Ҽ� �ִ� �Լ��� ����� ���� ����
//		{
//			std::cerr << "Something Wrong!" << std::endl;
//		}
//
//		// ���� ���� + ��� ����
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