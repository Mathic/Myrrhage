#include "stdafx.h"
#include "Stats.h"

Stats::Stats()
{
	m_Charisma = new Charisma();
	m_Constitution = new Constitution();
	m_Dexterity = new Dexterity();
	m_Intelligence = new Intelligence();
	m_Strength = new Strength();
}

Stats::Stats(int a, int c, int d, int i, int s)
{
	m_Charisma = new Charisma(a);
	m_Constitution = new Constitution(c);
	m_Dexterity = new Dexterity(d);
	m_Intelligence = new Intelligence(i);
	m_Strength = new Strength(s);
}

void Stats::ApplyStatModifier(BaseArmor* armor)
{
	vector<BaseAttribute> attr = armor->GetAttributes();
	for (std::vector<BaseAttribute>::size_type i = 0; i != attr.size(); i++)
	{
		switch (attr[i].GetType())
		{
		case MyrrhageEnums::CHA:
			m_Charisma->SetValue(m_Charisma->GetValue() + attr[i].GetValue());
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

void Stats::RemoveStatModifier(BaseArmor* armor)
{
	vector<BaseAttribute> attr = armor->GetAttributes();
	for (std::vector<BaseAttribute>::size_type i = 0; i != attr.size(); i++)
	{
		switch (attr[i].GetType())
		{
		case MyrrhageEnums::CHA:
			m_Charisma->SetValue(m_Charisma->GetValue() - attr[i].GetValue());
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

void Stats::Print()
{
	m_Charisma->Print();
	m_Constitution->Print();
	m_Dexterity->Print();
	m_Intelligence->Print();
	m_Strength->Print();
}

Stats::~Stats(){}
