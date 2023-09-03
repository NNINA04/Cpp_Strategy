#pragma once

#include "pch.h"

class DecoyDuck : public Duck
{
public:
	DecoyDuck() : Duck(new FlyNoWay(), new MuteQuack())
	{
	}
};
