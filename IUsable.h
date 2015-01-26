#pragma once
class IUsable
{
public:
	virtual ~IUsable();
	virtual void Consume() = 0;
};
