#include "stdafx.h"
#include "Strength.h"

Strength::Strength()
	: BaseAttribute(MyrrhageEnums::STR){}

Strength::Strength(int val)
	: BaseAttribute(MyrrhageEnums::STR, val){}

void Strength::Print() const
{
	BaseAttribute::Print();
}

Strength::~Strength(){}
