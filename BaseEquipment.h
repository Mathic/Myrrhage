#pragma once
#include <vector>

#include "BaseItem.h"
#include "BaseAttribute.h"

class BaseEquipment :
	public BaseItem
{
public:
	BaseEquipment();
	std::vector<BaseAttribute> GetAttributes();
	void Print();
	~BaseEquipment();
protected:
	std::vector<BaseAttribute> m_Attributes;
	MyrrhageEnums::ItemType m_ItemType;
	MyrrhageEnums::ClassType m_ClassType;
};

