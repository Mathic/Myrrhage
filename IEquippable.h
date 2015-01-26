#pragma once
class IEquippable
{
public:
	virtual ~IEquippable();
	virtual void Equip() = 0;
};

