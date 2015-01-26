#include "stdafx.h"
#include "Agility.h"

Agility::Agility()
	: BaseAttribute(MyrrhageEnums::AGI){}

Agility::Agility(int val)
	: BaseAttribute(MyrrhageEnums::AGI, val){}

void Agility::Print() const
{
	BaseAttribute::Print();
}

Agility::~Agility(){}
