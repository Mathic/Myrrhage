#pragma once
#include "Agility.h"
#include "Knowledge.h"
#include "Might.h"
#include "Presence.h"
#include "Resistance.h"

#include "HeadArmor.h"
#include "BodyArmor.h"
#include "HandArmor.h"
#include "LegArmor.h"
#include "FeetArmor.h"

class Hero
{
public:
	Hero();
	void CheckEquipped(Armor*, Armor*);
	void Equip(Armor*);
	void Unequip(Armor*);
	void SetStats(Armor*);
	void ApplyStatModifiers(Armor* armor);
	void RemoveStatModifiers(Armor* armor);
	void Print();
	~Hero();
protected:
	HeadArmor* m_HeadArmor;
	BodyArmor* m_BodyArmor;
	HandArmor* m_HandArmor;
	LegArmor* m_LegArmor;
	FeetArmor* m_FeetArmor;

	Agility* m_Agility;
	Knowledge* m_Knowledge;
	Might* m_Might;
	Presence* m_Presence;
	Resistance* m_Resistance;

};

