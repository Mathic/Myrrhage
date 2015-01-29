#pragma once
#include "BaseItem.h"

class BaseArmor :
	public BaseItem
{
public:
	BaseArmor();
	BaseArmor(string, int, MyrrhageEnums::ArmorType, MyrrhageEnums::ClassType);
	BaseArmor(string, int, vector<BaseAttribute>, MyrrhageEnums::ArmorType, MyrrhageEnums::ClassType);
	virtual void Equip();
	MyrrhageEnums::ClassType GetClass();
	MyrrhageEnums::ArmorType GetType();
	virtual void Print();
	~BaseArmor();
protected:
	MyrrhageEnums::ArmorType m_ArmorType;
	MyrrhageEnums::ClassType m_ClassType;
};
