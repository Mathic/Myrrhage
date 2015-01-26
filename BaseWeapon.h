#pragma once
#include "BaseItem.h"
#include "IEquippable.h"

class BaseWeapon :
	public BaseItem, public IEquippable
{
public:
	BaseWeapon();
	virtual void Equip();
	~BaseWeapon();
protected:
	MyrrhageEnums::WeaponType m_WeaponType;
	MyrrhageEnums::ClassType m_ClassType;
};
