#pragma once
#include "BaseAttribute.h"
class Agility :
	public BaseAttribute
{
public:
	Agility();
	Agility(int);
	virtual void Print() const;
	~Agility();
};

