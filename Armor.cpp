#include "stdafx.h"
#include "Armor.h"


Armor::Armor()
{
	m_ItemType = MyrrhageEnums::ARMOR;
}

MyrrhageEnums::ArmorType Armor::GetType()
{
	return m_ArmorType;
}

Armor::~Armor()
{
}
