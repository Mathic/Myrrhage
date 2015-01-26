#pragma once
#include "BaseAttribute.h"
class Strength :
	public BaseAttribute
{
public:
	Strength();
	Strength(int);
	virtual void Print() const;
	~Strength();
};

