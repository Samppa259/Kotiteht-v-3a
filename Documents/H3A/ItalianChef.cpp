#include "ItalianChef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string name) : chef(name)
{
    cout << "ItalianChef " << name << " is created." << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " is destroyed." << endl;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef " << name << " makes pasta." << endl;
}

string ItalianChef::getName()
{
    return name;
}
