#include "stdafx.h"
#include "Hero.h"

Hero::Hero()
{
	m_Equipment = new Equipment();
	m_Skills = new Stats();
}

Hero::Hero(string name)
{
	m_Name = name;
	m_Equipment = new Equipment();
	m_Skills = new Stats();
	m_Class = MyrrhageEnums::HACKER;
}

void Hero::SetName(string name)
{
	m_Name = name;
}

string Hero::GetName()
{
	return m_Name;
}

void Hero::SetClass(MyrrhageEnums::ClassType classType)
{
	m_Class = classType;
}

MyrrhageEnums::ClassType Hero::GetClass()
{
	return m_Class;
}

void Hero::Equip(BaseArmor* armor)
{
	if (armor->GetClass() != this->m_Class)
	{
		std::cout << "You cannot wear this." << endl;
		return;
	}
	std::cout << "Equipping ";

	if (m_Equipment->Equip(armor))
	{
		Unequip(armor);
		m_Equipment->Equip(armor);
	}
	m_Skills->ApplyStatModifier(armor);
}

void Hero::Unequip(BaseArmor* armor)
{
	std::cout << "Unequipping ";

	m_Equipment->Unequip(armor);
	m_Skills->RemoveStatModifier(armor);
}

void Hero::Print()
{
	std::cout << m_Name << endl;
	m_Skills->Print();
}

Hero::~Hero(){}
