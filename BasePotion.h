#pragma once
#include "BaseItem.h"
#include "IUsable.h"

class BasePotion :
	public BaseItem, public IUsable
{
public:
	BasePotion();
	virtual void Consume();
	~BasePotion();
protected:
	MyrrhageEnums::PotionType m_PotionType;
};
