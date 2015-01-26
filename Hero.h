#pragma once
#include "BaseCharacter.h"
#include "Inventory.h"
#include "Equipment.h"
#include "SkillSet.h"

class Hero : 
	public BaseCharacter
{
public:
	Hero();
	Hero(string);
	void Print();
	~Hero();
private:
	string m_Name;
	Inventory m_Inventory;
	Equipment m_Equipment;
	SkillSet* m_Skills;
};

