#include "stdafx.h"
#include "enums.h"
#include "BaseItem.h"

BaseItem::BaseItem()
	: BaseEntity(){}

BaseItem::BaseItem(string name, int id, MyrrhageEnums::ItemType iType)
	: BaseEntity(name, id)
{
	BaseAttribute attrs[] = { BaseAttribute(MyrrhageEnums::AGI), BaseAttribute(MyrrhageEnums::CON) };
	m_Attributes.assign(attrs, attrs + sizeof(attrs) / sizeof(BaseAttribute));
	m_ItemType = iType;
}

BaseItem::BaseItem(string name, int id, vector<BaseAttribute> attr, MyrrhageEnums::ItemType iType)
	: BaseEntity(name, id)
{
	m_Attributes = attr;
	m_ItemType = iType;
}

vector<BaseAttribute> BaseItem::GetAttributes()
{
	return m_Attributes;
}

void BaseItem::Print() const
{
	BaseEntity::Print();
	string item = "Item Type: ";
	
	switch (m_ItemType)
	{
	case MyrrhageEnums::WEAPON:
		item += "Weapon";
		break;
	case MyrrhageEnums::ARMOR:
		item += "Armor";
		break;
	case MyrrhageEnums::POTION:
		item += "Potion";
		break;
	default:
		break;
	}
	cout << item << endl;
	for (std::vector<BaseAttribute>::size_type i = 0; i != m_Attributes.size(); i++)
	{
		m_Attributes[i].Print();
	}
}

BaseItem::~BaseItem(){}
