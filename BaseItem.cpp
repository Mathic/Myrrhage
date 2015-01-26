#include "stdafx.h"
#include "enums.h"
#include "BaseItem.h"

BaseItem::BaseItem()
	: BaseEntity(){}

BaseItem::BaseItem(string name, int id, BaseAttribute* attr, MyrrhageEnums::ItemType iType)
	: BaseEntity(name, id)
{
	m_BaseAttribute = attr;
	m_ItemType = iType;
}

BaseItem::BaseItem(string name, int id, MyrrhageEnums::AttributeType aType, MyrrhageEnums::ItemType iType)
	: BaseEntity(name, id)
{
	m_BaseAttribute = new BaseAttribute(aType);
	m_ItemType = iType;
}

BaseItem::BaseItem(string name, int id, MyrrhageEnums::AttributeType aType, int val, MyrrhageEnums::ItemType iType)
	: BaseEntity(name, id)
{
	m_BaseAttribute = new BaseAttribute(aType, val);
	m_ItemType = iType;
}

void BaseItem::Print() const
{
	string item = "Item Type: ";
	m_BaseAttribute->Print();
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
}

BaseItem::~BaseItem(){}
