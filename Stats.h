#pragma once
#include <vector>
#include "BaseArmor.h"
#include "Charisma.h"
#include "Constitution.h"
#include "Dexterity.h"
#include "Intelligence.h"
#include "Strength.h"

class Stats
{
public:
	Stats();
	Stats(int, int, int, int, int);
	~Stats();
	void ApplyStatModifier(BaseArmor*);
	void RemoveStatModifier(BaseArmor*);
	void Print();
private:
	Charisma* m_Charisma;
	Constitution* m_Constitution;
	Dexterity* m_Dexterity;
	Intelligence* m_Intelligence;
	Strength* m_Strength;
};

