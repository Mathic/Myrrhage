#pragma once

class BaseEntity
{
public:
	BaseEntity(){}
	BaseEntity(string, int);
	virtual void Print() const;
	~BaseEntity();
protected:
	string m_Name;
	int m_ID;
};
