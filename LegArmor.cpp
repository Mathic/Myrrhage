#include "stdafx.h"
#include "LegArmor.h"

LegArmor::LegArmor(){}

LegArmor::LegArmor(std::string name, int id, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, MyrrhageEnums::LEGS, classType){}

LegArmor::LegArmor(std::string name, int id, vector<BaseAttribute> attrs, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, attrs, MyrrhageEnums::LEGS, classType){}

LegArmor::~LegArmor(){}
