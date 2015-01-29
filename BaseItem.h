#pragma once
#include <vector>
#include "BaseAttribute.h"
#include "BaseEntity.h"

class BaseItem :
	public BaseEntity
{
public:
	BaseItem();
	BaseItem(string, int, MyrrhageEnums::ItemType);
	BaseItem(string, int, vector<BaseAttribute>, MyrrhageEnums::ItemType);
	vector<BaseAttribute> GetAttributes();
	virtual void Print() const;
	~BaseItem();
protected:
	vector<BaseAttribute> m_Attributes;
	MyrrhageEnums::ItemType m_ItemType;
};
