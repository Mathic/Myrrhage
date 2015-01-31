#include "stdafx.h"
#include "Hero.h"


Hero::Hero()
{
	m_Agility = new Agility();
	m_Knowledge = new Knowledge();
	m_Might = new Might();
	m_Presence = new Presence();
	m_Resistance = new Resistance();
}

void Hero::CheckEquipped(Armor* newArmor, Armor* oldArmor)
{
	if (newArmor == oldArmor)
		return;

	if (!oldArmor)
	{
		ApplyStatModifiers(newArmor);
	}
	else
	{
		Unequip(newArmor);
		Equip(newArmor);
	}
}

void Hero::Equip(Armor* armor)
{
	switch (armor->GetType())
	{
	case MyrrhageEnums::HEAD:
		CheckEquipped(armor, m_HeadArmor);
		m_HeadArmor = (HeadArmor*)armor;
		break;
	case MyrrhageEnums::BODY:
		CheckEquipped(armor, m_BodyArmor);
		m_BodyArmor = (BodyArmor*)armor;
		break;
	case MyrrhageEnums::HANDS:
		CheckEquipped(armor, m_HandArmor);
		m_HandArmor = (HandArmor*)armor;
		break;
	case MyrrhageEnums::LEGS:
		CheckEquipped(armor, m_LegArmor);
		m_LegArmor = (LegArmor*)armor;
		break;
	case MyrrhageEnums::FEET:
		CheckEquipped(armor, m_FeetArmor);
		m_FeetArmor = (FeetArmor*)armor;
		break;
	default:
		break;
	}
}

void Hero::Unequip(Armor* armor)
{
	RemoveStatModifiers(armor);
	switch (armor->GetType())
	{
	case MyrrhageEnums::HEAD:
		m_HeadArmor = NULL;
		break;
	case MyrrhageEnums::BODY:
		m_BodyArmor = NULL;
		break;
	case MyrrhageEnums::HANDS:
		m_HandArmor = NULL;
		break;
	case MyrrhageEnums::LEGS:
		m_LegArmor = NULL;
		break;
	case MyrrhageEnums::FEET:
		m_FeetArmor = NULL;
		break;
	default:
		break;
	}
}

void Hero::ApplyStatModifiers(Armor* armor)
{
	vector<BaseAttribute> attr = armor->GetAttributes();
	for (std::vector<BaseAttribute>::size_type i = 0; i != attr.size(); i++)
	{
		switch (attr[i].GetType())
		{
		case MyrrhageEnums::AGI:
			m_Agility->Add(attr[i].GetValue());
			break;
		case MyrrhageEnums::KNO:
			m_Knowledge->Add(attr[i].GetValue());
			break;
		case MyrrhageEnums::MHT:
			m_Might->Add(attr[i].GetValue());
			break;
		case MyrrhageEnums::PRS:
			m_Presence->Add(attr[i].GetValue());
			break;
		case MyrrhageEnums::RES:
			m_Resistance->Add(attr[i].GetValue());
			break;
		}
	}
}

void Hero::RemoveStatModifiers(Armor* armor)
{
	vector<BaseAttribute> attr = armor->GetAttributes();
	for (std::vector<BaseAttribute>::size_type i = 0; i != attr.size(); i++)
	{
		switch (attr[i].GetType())
		{
		case MyrrhageEnums::AGI:
			m_Agility->Subtract(attr[i].GetValue());
			break;
		case MyrrhageEnums::KNO:
			m_Knowledge->Subtract(attr[i].GetValue());
			break;
		case MyrrhageEnums::MHT:
			m_Might->Subtract(attr[i].GetValue());
			break;
		case MyrrhageEnums::PRS:
			m_Presence->Subtract(attr[i].GetValue());
			break;
		case MyrrhageEnums::RES:
			m_Resistance->Subtract(attr[i].GetValue());
			break;
		}
	}
}

void Hero::Print()
{
	cout << "Agility: " + to_string(m_Agility->GetValue()) << endl;
	cout << "Knowledge: " + to_string(m_Knowledge->GetValue()) << endl;
	cout << "Might: " + to_string(m_Might->GetValue()) << endl;
	cout << "Presence: " + to_string(m_Presence->GetValue()) << endl;
	cout << "Resistance: " + to_string(m_Resistance->GetValue()) << endl;
}

Hero::~Hero()
{
}
