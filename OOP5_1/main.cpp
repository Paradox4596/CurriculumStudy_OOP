#include <iostream>

class Sword
{
	friend void Upgrade(Sword& sword);

private:
	int mDamage;

public:
	Sword(int dmg) : mDamage(dmg) {}
};

// ���� �Լ�
void Upgrade(Sword& sword)
{
	//a = b = c; // �ǹ̴� b�� c���� ����, a�� b��(c������ ����)�� ����
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