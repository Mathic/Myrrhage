#include "stdafx.h"
#include "Dexterity.h"

Dexterity::Dexterity()
	: BaseAttribute(MyrrhageEnums::DEX){}

Dexterity::Dexterity(int val)
	: BaseAttribute(MyrrhageEnums::DEX, val){}

void Dexterity::Print() const
{
	BaseAttribute::Print();
}

Dexterity::~Dexterity(){}
