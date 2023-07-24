#include <iostream>

class Sword
{

private:
	int mDamage;

public:
	Sword(int dmg) : mDamage(dmg) {}

	void Print()
	{
		std::cout << mDamage << std::endl;
	}

	friend void Upgrade(Sword& sword)
	{
		int oldDamage = sword.mDamage;
		std::cout << oldDamage	<< " -> "<< (sword.mDamage += sword.mDamage)<< std::endl;
	}
};


int main()
{
	Sword shortSword(1);

	Upgrade(shortSword);
}