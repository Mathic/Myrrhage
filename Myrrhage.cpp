// Myrrhage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "enums.h"
#include "BaseEntity.h"
#include "BaseAttribute.h"
#include "BaseItem.h"
#include "SkillSet.h"
#include "Hero.h"
#include "HeadArmor.h"

#include "Agility.h"

int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned int)time(NULL));
	Hero* hero = new Hero("Riza");
	hero->Print();
	cout << endl;
	HeadArmor* helmet = new HeadArmor("Helmet", 123, MyrrhageEnums::HACKER);
	helmet->Print();
	cout << endl;
	cout << "penis" << endl;
	hero->Equip(helmet);
	hero->Print();
	cout << endl;
	hero->Equip(helmet);
	hero->Print();
	cin.get();
	delete hero;
	delete helmet;
	return 0;
}
