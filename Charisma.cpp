#include "stdafx.h"
#include "Charisma.h"

Charisma::Charisma()
	: BaseAttribute(MyrrhageEnums::CHA){}

Charisma::Charisma(int val)
	: BaseAttribute(MyrrhageEnums::CHA, val){}

void Charisma::Print() const
{
	BaseAttribute::Print();
}

Charisma::~Charisma(){}
