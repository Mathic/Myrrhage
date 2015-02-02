#include "stdafx.h"
#include "Breastplate.h"


Breastplate::Breastplate()
{
	m_ClassType = MyrrhageEnums::CYBORG;
	BaseAttribute a = BaseAttribute();
	BaseAttribute b = BaseAttribute();
	BaseAttribute c = BaseAttribute();

	a.SetType(MyrrhageEnums::MHT);
	a.SetValue((rand() % 10)+1);

	b.SetType(MyrrhageEnums::PRS);
	b.SetValue((rand() % 10) + 1); 
	
	c.SetType(MyrrhageEnums::RES);
	c.SetValue((rand() % 10) + 1);

	m_Attributes = { a, b, c };
}


Breastplate::~Breastplate()
{
}
