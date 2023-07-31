#include <iostream>
#include "Cat.h"

Cat::Cat() : mBreed{ BREED::KOREANSHORT } // �׳ɽᵵ �۵������� ��������� Ǧ���Ѱ�
{
    std::cout << "\t[+] Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "\t[-] Cat" << std::endl;
}

Cat::BREED Cat::GetBreed() const // ���� ���� ���� = breed�� Ĺ �ȿ� �ִ°Ŷ�
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
