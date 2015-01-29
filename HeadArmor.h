#pragma once
#include "BaseArmor.h"

class HeadArmor :
	public BaseArmor
{
public:
	HeadArmor();
	HeadArmor(std::string, int, MyrrhageEnums::ClassType);
	HeadArmor(std::string, int, vector<BaseAttribute>, MyrrhageEnums::ClassType);
	~HeadArmor();
protected:
	
};

