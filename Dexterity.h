#pragma once
#include "BaseAttribute.h"
class Dexterity :
	public BaseAttribute
{
public:
	Dexterity();
	Dexterity(int);
	virtual void Print() const;
	~Dexterity();
};

