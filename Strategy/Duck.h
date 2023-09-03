#pragma once

#include "pch.h"
#include "IFlyBehaviour.h"
#include "IQuackBehaviour.h"

class Duck
{
    IFlyBehaviour* _fb;
    IQuackBehaviour* _qb;
public:
    Duck(IFlyBehaviour* fb, IQuackBehaviour* qb)
        : _fb(fb)
        , _qb(qb)
    {
    }
    
    void Display()
    {
        cout << "Fly behaviour: ";
        PerformFly();
        cout << endl;
        cout << "Quack behaviour: ";
        PerformQuack();
        cout << endl;
    }

    void PerformFly()
    {
        _fb->Fly();
    }

    void PerformQuack()
    {
        _qb->Quack();
    }

    void SetFlyBehaviour(IFlyBehaviour* fb)
    {
        delete _fb;
        _fb = fb;
    }

    void SetFlyBehaviour(IQuackBehaviour* qb)
    {
        delete _qb;
        _qb = qb;
    }
};
