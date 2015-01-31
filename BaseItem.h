#pragma once
#include "enums.h"

class BaseItem
{
public:
	BaseItem();
	~BaseItem();
protected:
	MyrrhageEnums::ItemType m_ItemType;
};

