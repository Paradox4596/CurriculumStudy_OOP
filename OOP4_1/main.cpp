#include <iostream>

class MyClass
{
public:
	static int mValue1;
	
	static void Function();
};

void MyClass::Function()
{
	std::cout << mValue1 << std::endl;
}

int MyClass::mValue1{};

int main()
{
	MyClass c1;
	MyClass::Function();

	MyClass c2;
	MyClass::Function();
}