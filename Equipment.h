#pragma once
#include "enums.h"
#include "BaseArmor.h"
#include "HeadArmor.h"
#include "BodyArmor.h"
#include "HandArmor.h"
#include "LegArmor.h"
#include "FeetArmor.h"

class Equipment
{
public:
	Equipment();
	void EquipHeadArmor();
	void EquipBodyArmor();
	void EquipHandArmor();
	void EquipLegArmor();
	void EquipFeetArmor();
	void CalculateEquipmentModifiers();
	~Equipment();
private:
	HeadArmor* m_HeadArmor;
	BodyArmor* m_BodyArmor;
	HandArmor* m_HandArmor;
	LegArmor* m_LegArmor;
	FeetArmor* m_FeetArmor;
};

