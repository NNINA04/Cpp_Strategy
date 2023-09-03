#pragma once

#include "pch.h"

class FlyNoWay : public IFlyBehaviour 
{
public:
    virtual void Fly() override
    {
        cout << "..." << endl;
    }
};
