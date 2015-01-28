#pragma once
#include "BaseArmor.h"
class HandArmor :
	public BaseArmor
{
public:
	HandArmor();
	HandArmor(std::string, int, MyrrhageEnums::ClassType);
	HandArmor(std::string, int, vector<BaseAttribute>, MyrrhageEnums::ClassType);
	virtual void Equip();
	~HandArmor();
};

