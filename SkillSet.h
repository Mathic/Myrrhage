#pragma once
#include "Agility.h"
#include "Constitution.h"
#include "Dexterity.h"
#include "Intelligence.h"
#include "Strength.h"

class SkillSet
{
public:
	SkillSet();
	SkillSet(int, int, int, int, int);
	~SkillSet();
	void Print();
	Agility* m_Agility;
	Constitution* m_Constitution;
	Dexterity* m_Dexterity;
	Intelligence* m_Intelligence;
	Strength* m_Strength;
};

