#include "stdafx.h"
#include "BaseEquipment.h"


BaseEquipment::BaseEquipment()
{
}

std::vector<BaseAttribute> BaseEquipment::GetAttributes()
{
	return m_Attributes;
}

void BaseEquipment::Print()
{
	vector<BaseAttribute> attr = m_Attributes;
	for (std::vector<BaseAttribute>::size_type i = 0; i != attr.size(); i++)
	{
		switch (attr[i].GetType())
		{
		case MyrrhageEnums::AGI:
			cout << "Agility: ";
			break;
		case MyrrhageEnums::KNO:
			cout << "Knowledge: ";
			break;
		case MyrrhageEnums::MHT:
			cout << "Might: ";
			break;
		case MyrrhageEnums::PRS:
			cout << "Presence: ";
			break;
		case MyrrhageEnums::RES:
			cout << "Resistance: ";
			break;
		}
		cout << to_string(attr[i].GetValue()) << endl;
	}
	
}

BaseEquipment::~BaseEquipment()
{
}
