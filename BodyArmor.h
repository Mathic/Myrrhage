#pragma once
#include "BaseArmor.h"
class BodyArmor :
	public BaseArmor
{
public:
	BodyArmor();
	BodyArmor(std::string, int, MyrrhageEnums::ClassType);
	BodyArmor(std::string, int, vector<BaseAttribute>, MyrrhageEnums::ClassType);
	~BodyArmor();
};

