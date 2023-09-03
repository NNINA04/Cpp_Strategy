#pragma once

#include "pch.h"

class MallardDuck : public Duck
{
public:
	MallardDuck() : Duck(new FlyWithWings(), new DefaultQuack())
	{
	}
};
