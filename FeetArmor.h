#pragma once
#include "BaseArmor.h"
class FeetArmor :
	public BaseArmor
{
public:
	FeetArmor();
	FeetArmor(std::string, int, MyrrhageEnums::ClassType);
	FeetArmor(std::string, int, vector<BaseAttribute>, MyrrhageEnums::ClassType);
	~FeetArmor();
};

