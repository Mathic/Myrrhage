#pragma once
class BaseCharacter
{
public:
	BaseCharacter();
	~BaseCharacter();
protected:
	double m_HitPoints;
	double m_MaxHitPoints;
	double m_Energy;
	double m_MaxEnergy;
};
