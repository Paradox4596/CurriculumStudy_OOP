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

	Dog::BREED GetBreed() const; // 명시적으로
	void SetBreed(Dog::BREED breed);

	void Barking();
};

