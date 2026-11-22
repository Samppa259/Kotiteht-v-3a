#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    chef chef("Gordon Ramsay");

    chef.makesalad();
    chef.makesoup();
    cout << endl;


    ItalianChef italianChef("Anthony Bourdain");

    italianChef.makesalad();
    italianChef.makesoup();
    italianChef.makePasta();

    cout << "ItalianChef name: " << italianChef.getName() << endl;

    return 0;
}
