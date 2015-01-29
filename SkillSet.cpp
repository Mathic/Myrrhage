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

void SkillSet::Equip(BaseArmor* armor)
{
	vector<BaseAttribute> attr = armor->GetAttributes();
	for (std::vector<BaseAttribute>::size_type i = 0; i != attr.size(); i++)
	{
		switch (attr[i].GetType())
		{
		case MyrrhageEnums::AGI:
			m_Agility->SetValue(m_Agility->GetValue() + attr[i].GetValue());
			break;
		case MyrrhageEnums::CON:
			m_Constitution->SetValue(m_Constitution->GetValue() + attr[i].GetValue());
			break;
		case MyrrhageEnums::DEX:
			m_Dexterity->SetValue(m_Dexterity->GetValue() + attr[i].GetValue());
			break;
		case MyrrhageEnums::INT:
			m_Intelligence->SetValue(m_Intelligence->GetValue() + attr[i].GetValue());
			break;
		case MyrrhageEnums::STR:
			m_Strength->SetValue(m_Strength->GetValue() + attr[i].GetValue());
			break;
		}
	}
}

void SkillSet::Unequip(BaseArmor* armor)
{
	vector<BaseAttribute> attr = armor->GetAttributes();
	for (std::vector<BaseAttribute>::size_type i = 0; i != attr.size(); i++)
	{
		switch (attr[i].GetType())
		{
		case MyrrhageEnums::AGI:
			m_Agility->SetValue(m_Agility->GetValue() - attr[i].GetValue());
			break;
		case MyrrhageEnums::CON:
			m_Constitution->SetValue(m_Constitution->GetValue() - attr[i].GetValue());
			break;
		case MyrrhageEnums::DEX:
			m_Dexterity->SetValue(m_Dexterity->GetValue() - attr[i].GetValue());
			break;
		case MyrrhageEnums::INT:
			m_Intelligence->SetValue(m_Intelligence->GetValue() - attr[i].GetValue());
			break;
		case MyrrhageEnums::STR:
			m_Strength->SetValue(m_Strength->GetValue() - attr[i].GetValue());
			break;
		}
	}
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
