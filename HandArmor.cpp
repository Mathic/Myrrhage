#include "stdafx.h"
#include "HandArmor.h"

HandArmor::HandArmor(){}

HandArmor::HandArmor(std::string name, int id, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, MyrrhageEnums::HANDS, classType){}

HandArmor::HandArmor(std::string name, int id, vector<BaseAttribute> attrs, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, attrs, MyrrhageEnums::HANDS, classType){}

void HandArmor::Equip(){}

HandArmor::~HandArmor(){}
