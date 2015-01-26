#include "stdafx.h"
#include "Hero.h"

Hero::Hero()
{
	m_Skills = new SkillSet();
	m_Skills->Print();
}

Hero::Hero(string name)
{
	m_Name = name;
	m_Skills = new SkillSet();
	cout << m_Name << endl;
	m_Skills->Print();
}

void Hero::Print()
{
	
}

Hero::~Hero(){}
