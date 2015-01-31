#include "stdafx.h"
#include "Breastplate.h"


Breastplate::Breastplate()
{
	m_ClassType = MyrrhageEnums::CYBORG;
	BaseAttribute a = BaseAttribute();
	BaseAttribute b = BaseAttribute();
	BaseAttribute c = BaseAttribute();

	a.SetType(MyrrhageEnums::MHT);
	a.SetValue(rand() % 10);

	b.SetType(MyrrhageEnums::RES);
	b.SetValue(rand() % 10);

	c.SetType(MyrrhageEnums::PRS);
	c.SetValue(rand() % 10);

	m_Attributes = { a, b, c };
}


Breastplate::~Breastplate()
{
}
