#include <iostream>

class Sword
{
	friend void Upgrade(Sword& sword);

private:
	int mDamage;

public:
	Sword(int dmg) : mDamage(dmg) {}
};

// 전역 함수
void Upgrade(Sword& sword)
{
	//a = b = c; // 의미는 b에 c값을 대입, a에 b값(c값으로 변한)을 대입
	int oldDamage = sword.mDamage;
	std::cout << oldDamage
		<< " -> " 
		<< (sword.mDamage += sword.mDamage) 
		<< std::endl;
}

int main()
{
	Sword shortSword(1);

	Upgrade(shortSword);
}