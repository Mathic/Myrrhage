#pragma once
#include "BaseItem.h"

class BaseWeapon :
	public BaseItem
{
public:
	BaseWeapon();
	virtual void Equip() = 0;
	~BaseWeapon();
protected:
	MyrrhageEnums::WeaponType m_WeaponType;
	MyrrhageEnums::ClassType m_ClassType;
};
