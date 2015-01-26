// Myrrhage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "enums.h"
#include "BaseEntity.h"
#include "BaseAttribute.h"
#include "BaseItem.h"
#include "SkillSet.h"
#include "Hero.h"

#include "Agility.h"

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));
	BaseAttribute * att = new BaseAttribute(MyrrhageEnums::AGI);
	BaseEntity * ent;
	att->Print();
	cout << endl;
	BaseItem * item = new BaseItem("not a test", 2, MyrrhageEnums::AGI, rand() % 100, MyrrhageEnums::ARMOR);
	ent = item;
	ent->Print();
	cout << endl;
	Hero* hero = new Hero("Riza");

	cin.get();
	return 0;
}
