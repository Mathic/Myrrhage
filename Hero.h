#pragma once
#include "BaseCharacter.h"
#include "BaseArmor.h"
#include "Inventory.h"
#include "Equipment.h"
#include "Stats.h"
#include "enums.h"

class Hero : 
	public BaseCharacter
{
public:
	Hero();
	Hero(string);
	void SetName(string);
	string GetName();
	void SetClass(MyrrhageEnums::ClassType);
	MyrrhageEnums::ClassType GetClass();
	void Equip(BaseArmor*);
	void Unequip(BaseArmor*);
	void Print();
	~Hero();
private:
	string m_Name;
	MyrrhageEnums::ClassType m_Class;
	Inventory* m_Inventory;
	Equipment* m_Equipment;
	Stats* m_Skills;
};

