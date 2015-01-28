#include "stdafx.h"
#include "FeetArmor.h"

FeetArmor::FeetArmor(){}

FeetArmor::FeetArmor(std::string name, int id, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, MyrrhageEnums::FEET, classType){}

FeetArmor::FeetArmor(std::string name, int id, vector<BaseAttribute> attrs, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, attrs, MyrrhageEnums::FEET, classType){}

void FeetArmor::Equip(){}

FeetArmor::~FeetArmor(){}
