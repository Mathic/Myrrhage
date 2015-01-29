#pragma once

class BaseSkill
{
public:
	BaseSkill();
	~BaseSkill();
	virtual void Execute() = 0;
protected:
	MyrrhageEnums::ClassType m_ClassType;
	//BaseAttribute m_MinAttributeValues[];
};

