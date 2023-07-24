#include <iostream>

class Bullet
{
public:
	static int sCount;

	Bullet()
	{
		sCount++;

		std::cout << "[+]" << sCount << std::endl;
	}

	~Bullet()
	{
		sCount--;

		std::cout << "[-]" << sCount << std::endl;
	}
};

int Bullet::sCount {};

int main()
{
	Bullet b1;

	for (int i = 0; i < 1000; i++)
	{
		Bullet b2;
		Bullet* p = new Bullet();
	}
}

// ó�� +3��, ���� -1�� +2���� �ݺ��Ǵ� ����?