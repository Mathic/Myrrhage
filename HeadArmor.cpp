#include "stdafx.h"
#include "enums.h"
#include "HeadArmor.h"

HeadArmor::HeadArmor()
	: BaseArmor(){}

HeadArmor::HeadArmor(std::string name, int id, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, MyrrhageEnums::HEAD, classType){}

HeadArmor::HeadArmor(std::string name, int id, vector<BaseAttribute> attrs, MyrrhageEnums::ClassType classType)
	: BaseArmor(name, id, attrs, MyrrhageEnums::HEAD, classType){}

void HeadArmor::Equip()
{
	
}

HeadArmor::~HeadArmor(){}
