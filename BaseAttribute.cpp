#include "stdafx.h"
#include "enums.h"
#include "BaseAttribute.h"

BaseAttribute::BaseAttribute(){}

BaseAttribute::BaseAttribute(MyrrhageEnums::AttributeType attr)
{
	m_Attribute = attr;
	m_Value = rand() % 100;
}

BaseAttribute::BaseAttribute(MyrrhageEnums::AttributeType attr, int val)
{
	m_Attribute = attr;
	m_Value = val;
}

int BaseAttribute::GetValue()
{
	return m_Value;
}

void BaseAttribute::SetValue(int value)
{
	m_Value = value;
}

void BaseAttribute::Print() const
{
	switch (m_Attribute)
	{
	case MyrrhageEnums::AGI:
		cout << "Agility: ";
		break;
	case MyrrhageEnums::CON:
		cout << "Constitution: ";
		break;
	case MyrrhageEnums::DEX:
		cout << "Dexterity: ";
		break;
	case MyrrhageEnums::INT:
		cout << "Intelligence: ";
		break;
	case MyrrhageEnums::STR:
		cout << "Strength: ";
		break;
	}
	cout << m_Value << endl;
}

BaseAttribute::~BaseAttribute(){}
