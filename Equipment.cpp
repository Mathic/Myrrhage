#include "stdafx.h"
#include "Equipment.h"

Equipment::Equipment()
{
}

bool Equipment::Equip(BaseArmor* armor)
{
	switch (armor->GetType())
	{
	case MyrrhageEnums::HEAD:
		if (this->m_HeadArmor != NULL)
			return true;
		m_HeadArmor = (HeadArmor*)armor;
		return false;
	case MyrrhageEnums::BODY:
		if (this->m_BodyArmor != NULL)
			return true;
		m_BodyArmor = (BodyArmor*)armor;
		return false;
	case MyrrhageEnums::HANDS:
		if (this->m_HandArmor != NULL)
			return true;
		m_HandArmor = (HandArmor*)armor;
		return false;
	case MyrrhageEnums::LEGS:
		if (this->m_LegArmor != NULL)
			return true;
		m_LegArmor = (LegArmor*)armor;
		return false;
	case MyrrhageEnums::FEET:
		if (this->m_FeetArmor != NULL)
			return true;
		m_FeetArmor = (FeetArmor*)armor;
		return false;
	default:
		return false;
	}
}

void Equipment::Unequip(BaseArmor* armor)
{
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

Equipment::~Equipment()
{
}
