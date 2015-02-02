#pragma once
#include "enums.h"

class BaseItem
{
public:
	BaseItem();
	virtual void OnPickUp() = 0;
	~BaseItem();
protected:
	MyrrhageEnums::ItemType m_ItemType;
	bool m_IsPickedUp;
};

