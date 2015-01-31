// Myrrhage.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Hero.h"
#include "Breastplate.h"

int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned int)time(NULL));
	Hero* hero = new Hero();
	Breastplate* breastplate = new Breastplate();

	hero->Print();
	cout << endl;

	breastplate->Print();
	hero->Equip(breastplate);
	cout << endl;
	hero->Print();

	hero->Equip(breastplate);
	cout << endl;
	hero->Print();
	cin.get();
	delete hero;
	delete breastplate;
	return 0;
}
