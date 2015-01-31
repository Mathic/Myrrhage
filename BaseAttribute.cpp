#include "stdafx.h"
#include "BaseAttribute.h"

BaseAttribute::BaseAttribute()
{
}

int BaseAttribute::GetValue()
{
	return m_Value;
}

void BaseAttribute::SetValue(int value)
{
	m_Value = value;
}

MyrrhageEnums::AttributeType BaseAttribute::GetType()
{
	return m_Attribute;
}

void BaseAttribute::SetType(MyrrhageEnums::AttributeType type)
{
	m_Attribute = type;
}

BaseAttribute::~BaseAttribute()
{
}
