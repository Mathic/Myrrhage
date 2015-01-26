#pragma once
#include "BaseAttribute.h"
class Constitution :
	public BaseAttribute
{
public:
	Constitution();
	Constitution(int);
	virtual void Print() const;
	~Constitution();
};

