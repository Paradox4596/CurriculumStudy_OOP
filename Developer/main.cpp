#include <iostream>
#include "Cat.h" // Cat을 가져오면 순서상 animal도 저 내용안에 포함되어있으므로 둘다 사용 가능
#include "Dog.h"

int main()
{
	Cat nabi;

	nabi.SetAge(2);
	nabi.SetBreed(Cat::BREED::TURKISHANGORA);
	nabi.Sound();
	nabi.Grooming();

	Dog marry;
	marry.SetAge(2);
	marry.SetBreed(Dog::BREED::POMERANIAN);
	marry.Sound();
	marry.Barking();
}