#pragma once
#include "BaseAttribute.h"
class Intelligence :
	public BaseAttribute
{
public:
	Intelligence();
	Intelligence(int);
	virtual void Print() const;
	~Intelligence();
};

