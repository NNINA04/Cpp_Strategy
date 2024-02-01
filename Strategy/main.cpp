#include "pch.h"

void HandleDisplay(vector<Duck> ducks)
{
    for(auto& duck : ducks)
    {
        duck.Display();
        cout << "=============================================\n\n";
    }
}

/*
    This example is from book, but with a few differences
*/

int main()
{
    HandleDisplay({DecoyDuck(), MallardDuck(), RedHeadDuck()});
}
