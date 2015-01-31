#pragma once
#include "BaseEquipment.h"
class Armor :
	public BaseEquipment
{
public:
	Armor();
	~Armor();
protected:
	MyrrhageEnums::ArmorType m_ArmorType;
};

