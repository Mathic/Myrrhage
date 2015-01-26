#pragma once
#include "BaseItem.h"
#include "IEquippable.h"

class BaseArmor :
	public BaseItem, public IEquippable
{
public:
	BaseArmor();
	virtual void Equip();
	~BaseArmor();
protected:
	MyrrhageEnums::ArmorType m_ArmorType;
	MyrrhageEnums::ClassType m_ClassType;
};
