#pragma once
#include "BaseArmor.h"
class LegArmor :
	public BaseArmor
{
public:
	LegArmor();
	LegArmor(std::string, int, MyrrhageEnums::ClassType);
	LegArmor(std::string, int, vector<BaseAttribute>, MyrrhageEnums::ClassType);
	~LegArmor();
};

