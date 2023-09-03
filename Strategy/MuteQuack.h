#pragma once

#include "pch.h"

class MuteQuack : public IQuackBehaviour
{
public:
    virtual void Quack() override
    {
        cout << "..." << endl;
    }
};
