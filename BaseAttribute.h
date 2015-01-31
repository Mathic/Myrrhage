#pragma once
#include "enums.h"

class BaseAttribute
{
public:
	BaseAttribute();
	int GetValue();
	void SetValue(int);
	MyrrhageEnums::AttributeType GetType();
	void SetType(MyrrhageEnums::AttributeType);
	void Add(int);
	void Subtract(int);
	~BaseAttribute();
protected:
	MyrrhageEnums::AttributeType m_Attribute;
	int m_Value;
};

