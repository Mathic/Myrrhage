#include "stdafx.h"
#include "BodyArmor.h"

BodyArmor::BodyArmor(){}

BodyArmor::BodyArmor(std::string name, int id, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, MyrrhageEnums::BODY, classType){}

BodyArmor::BodyArmor(std::string name, int id, vector<BaseAttribute> attrs, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, attrs, MyrrhageEnums::BODY, classType){}

void BodyArmor::Equip(){}

BodyArmor::~BodyArmor(){}
