#pragma once

#include "pch.h"

class RedHeadDuck : public Duck
{
public:
	RedHeadDuck() : Duck(new FlyNoWay(), new DefaultQuack())
	{
	}
};
