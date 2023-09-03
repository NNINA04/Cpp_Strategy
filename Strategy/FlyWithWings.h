#pragma once

#include "pch.h"

class FlyWithWings : public IFlyBehaviour
{
public:
    virtual void Fly() override
    {
        cout << "Flying with wings" << endl;
    }
};
