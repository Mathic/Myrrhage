#include "stdafx.h"
#include "BaseEntity.h"

BaseEntity::BaseEntity(string name, int id)
{
	m_Name = name;
	m_ID = id;
}

void BaseEntity::Print() const
{
	cout << "Name: ";
	cout << m_Name << endl;
	cout << "ID: ";
	cout << m_ID << endl;
}

BaseEntity::~BaseEntity(){}
