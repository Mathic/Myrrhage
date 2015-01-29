#pragma once
#include "BaseAttribute.h"
class Charisma :
	public BaseAttribute
{
public:
	Charisma();
	Charisma(int);
	virtual void Print() const;
	~Charisma();
};

