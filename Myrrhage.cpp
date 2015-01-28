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
	srand(time(NULL));
	BaseEntity * ent;
	BaseAttribute * att = new BaseAttribute(MyrrhageEnums::AGI);
	cout << "Attribute" << endl;
	att->Print();
	cout << endl;
	BaseItem * item = new BaseItem("not a test", 2, MyrrhageEnums::ARMOR);
	ent = item;
	ent->Print();
	cout << endl;
	Hero* hero = new Hero("Riza");
	cout << endl;
	HeadArmor* helmet = new HeadArmor("Helmet", 123, MyrrhageEnums::HACKER);
	helmet->Print();

	cin.get();
	return 0;
}
