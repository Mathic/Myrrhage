#pragma once
#include "BaseEquipment.h"
class Weapon :
	public BaseEquipment
{
public:
	Weapon();
	~Weapon();
protected:
	MyrrhageEnums::WeaponType m_WeaponType;
};

