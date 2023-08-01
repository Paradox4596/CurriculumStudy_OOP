#include <iostream>

class Parent
{
public:
	void Function()
	{
		std::cout << "Parent::function" << std::endl;
	}
};

class Child : public Parent
{
public:
	void Function()
	{
		std::cout << "Child::Function" << std::endl;
	}

};

int main()
{
	Parent p;
	p.Function();

	Child c;
	c.Function();
}