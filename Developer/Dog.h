#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	enum BREED
	{
		GOLDEN_RETRIEVER,
		POMERANIAN,
		SAMOYED,
		SHIBA
	};

private:
	BREED mBreed;

public:
	Dog();
	~Dog();

	Dog::BREED GetBreed() const; // ���������
	void SetBreed(Dog::BREED breed);

	void Barking();
};

