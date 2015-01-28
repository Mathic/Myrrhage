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

void Hero::Print()
{
	
}

Hero::~Hero(){}
