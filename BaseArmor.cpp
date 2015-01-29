#include "stdafx.h"
#include "enums.h"
#include "BaseArmor.h"

BaseArmor::BaseArmor(){}

BaseArmor::BaseArmor(string name, int id, MyrrhageEnums::ArmorType aType, MyrrhageEnums::ClassType cType)
	: BaseItem(name, id, MyrrhageEnums::ARMOR)
{
	m_ArmorType = aType;
	m_ClassType = cType;
}
BaseArmor::BaseArmor(string name, int id, vector<BaseAttribute> attrs, MyrrhageEnums::ArmorType aType, MyrrhageEnums::ClassType cType)
	: BaseItem(name, id, attrs, MyrrhageEnums::ARMOR)
{
	m_ArmorType = aType;
	m_ClassType = cType;
}

void BaseArmor::Equip(){}

MyrrhageEnums::ClassType BaseArmor::GetClass()
{
	return m_ClassType;
}

MyrrhageEnums::ArmorType BaseArmor::GetType()
{
	return m_ArmorType;
}

void BaseArmor::Print()
{
	BaseItem::Print();
	string armor = "Armor Type: ";
	string _class = "For Class ";
	switch (m_ArmorType)
	{
	case MyrrhageEnums::HEAD:
		armor += "Head";
		break;
	case MyrrhageEnums::BODY:
		armor += "Body";
		break;
	case MyrrhageEnums::HANDS:
		armor += "Armor";
		break;
	case MyrrhageEnums::LEGS:
		armor += "Legs";
		break;
	case MyrrhageEnums::FEET:
		armor += "Feet";
		break;
	default:
		break;
	}
	cout << armor << endl;

	switch (m_ClassType)
	{
	case MyrrhageEnums::CYBORG:
		_class += "Cyborg";
		break;
	case MyrrhageEnums::HACKER:
		_class += "Hacker";
		break;
	case MyrrhageEnums::INFANTRY:
		_class += "Infantry";
		break;
	case MyrrhageEnums::PSION:
		_class += "Psion";
		break;
	}
	cout << _class << endl;
}

BaseArmor::~BaseArmor(){}
