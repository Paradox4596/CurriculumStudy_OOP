#include <iostream>
#include "Dog.h"

Dog::Dog() : mBreed { BREED::GOLDEN_RETRIEVER }
{
	std::cout << "\t[+] Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "\t[-] Dog" << std::endl;
}

Dog::BREED Dog::GetBreed() const
{
	return mBreed;
}

void Dog::SetBreed(Dog::BREED breed)
{
	mBreed = breed;
}

void Dog::Barking()
{
	std::cout << "Woof Woof!" << std::endl;
}
