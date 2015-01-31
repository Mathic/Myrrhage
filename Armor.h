#pragma once
#include "BaseEquipment.h"
class Armor :
	public BaseEquipment
{
public:
	Armor();
	MyrrhageEnums::ArmorType GetType();
	~Armor();
protected:
	MyrrhageEnums::ArmorType m_ArmorType;
};

