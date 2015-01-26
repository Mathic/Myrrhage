#include "stdafx.h"
#include "SkillSet.h"


SkillSet::SkillSet()
{
	m_Agility = new Agility();
	m_Constitution = new Constitution();
	m_Dexterity = new Dexterity();
	m_Intelligence = new Intelligence();
	m_Strength = new Strength();
}

SkillSet::SkillSet(int a, int c, int d, int i, int s)
{
	m_Agility = new Agility(a);
	m_Constitution = new Constitution(c);
	m_Dexterity = new Dexterity(d);
	m_Intelligence = new Intelligence(i);
	m_Strength = new Strength(s);
}

void SkillSet::Print()
{
	m_Agility->Print();
	m_Constitution->Print();
	m_Dexterity->Print();
	m_Intelligence->Print();
	m_Strength->Print();
}

SkillSet::~SkillSet(){}
