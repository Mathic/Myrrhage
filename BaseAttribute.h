#pragma once
#include "enums.h"

class BaseAttribute
{
public:
	BaseAttribute();
	BaseAttribute(MyrrhageEnums::AttributeType);
	BaseAttribute(MyrrhageEnums::AttributeType, int);
	int GetValue();
	void SetValue(int);
	MyrrhageEnums::AttributeType GetType();
	virtual void Print() const;
	~BaseAttribute();
protected:
	MyrrhageEnums::AttributeType m_Attribute;
	int m_Value;
};
