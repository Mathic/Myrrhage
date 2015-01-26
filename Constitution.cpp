#include "stdafx.h"
#include "Constitution.h"

Constitution::Constitution()
	: BaseAttribute(MyrrhageEnums::CON){}

Constitution::Constitution(int val)
	: BaseAttribute(MyrrhageEnums::CON, val){}

void Constitution::Print() const
{
	BaseAttribute::Print();
}

Constitution::~Constitution(){}
