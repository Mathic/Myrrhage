#pragma once
#include "BaseItem.h"

class BasePotion :
	public BaseItem
{
public:
	BasePotion();
	virtual void Consume() = 0;
	~BasePotion();
protected:
	MyrrhageEnums::PotionType m_PotionType;
};
