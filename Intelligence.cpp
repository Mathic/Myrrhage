#include "stdafx.h"
#include "Intelligence.h"

Intelligence::Intelligence()
	: BaseAttribute(MyrrhageEnums::INT){}

Intelligence::Intelligence(int val)
	: BaseAttribute(MyrrhageEnums::INT, val){}

void Intelligence::Print() const
{
	BaseAttribute::Print();
}

Intelligence::~Intelligence(){}
