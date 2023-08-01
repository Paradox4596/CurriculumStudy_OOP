#include <iostream>
#include "Cat.h"

// member initialization list ... 즉 여기서 초기화는 불가능.. 
Cat::Cat() : 
    Animal(0,1),
    mBreed{ BREED::KOREANSHORT } // 이런식으론 안된다 ->,mAge{ 1 }, mWeight{ 1 } // 그냥써도 작동하지만 명시적으로 푠현한것
{
    //mAge = 10;
    //mWeight = 10; //oop적인 측면에서 이런식의 코드는 좋지않음. 자기가 할 일은 자기가 초기화 하는게 나음
    
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
