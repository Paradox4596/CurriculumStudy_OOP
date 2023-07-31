#include <iostream>
#include "Cat.h"

Cat::Cat() : mBreed{ BREED::KOREANSHORT } // 그냥써도 작동하지만 명시적으로 푠현한것
{
    std::cout << "\t[+] Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "\t[-] Cat" << std::endl;
}

Cat::BREED Cat::GetBreed() const // 에러 났던 이유 = breed는 캣 안에 있는거라서
{
    return mBreed;
}

void Cat::SetBreed(Cat::BREED breed)
{
    mBreed = breed;
}

void Cat::Grooming()
{
    std::cout << "Grooming..." << std::endl;
}
