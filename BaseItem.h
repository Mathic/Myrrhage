#pragma once
#include "BaseAttribute.h"
#include "BaseEntity.h"

class BaseItem :
	public BaseEntity
{
public:
	BaseItem();
	BaseItem(string, int, BaseAttribute*, MyrrhageEnums::ItemType);
	BaseItem(string, int, MyrrhageEnums::AttributeType, MyrrhageEnums::ItemType);
	BaseItem(string, int, MyrrhageEnums::AttributeType, int, MyrrhageEnums::ItemType);
	virtual void Print() const;
	~BaseItem();
protected:
	BaseAttribute* m_BaseAttribute;
	MyrrhageEnums::ItemType m_ItemType;
};
