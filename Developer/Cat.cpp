#include <iostream>
#include "Cat.h"

// member initialization list ... �� ���⼭ �ʱ�ȭ�� �Ұ���.. 
Cat::Cat() : 
    Animal(0,1),
    mBreed{ BREED::KOREANSHORT } // �̷������� �ȵȴ� ->,mAge{ 1 }, mWeight{ 1 } // �׳ɽᵵ �۵������� ��������� Ǧ���Ѱ�
{
    //mAge = 10;
    //mWeight = 10; //oop���� ���鿡�� �̷����� �ڵ�� ��������. �ڱⰡ �� ���� �ڱⰡ �ʱ�ȭ �ϴ°� ����
    
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
