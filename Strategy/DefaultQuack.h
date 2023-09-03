#pragma once

#include "pch.h"

class DefaultQuack : public IQuackBehaviour
{
public:
    virtual void Quack() override
    {
        cout << "Quack!" << endl;
    }
};
