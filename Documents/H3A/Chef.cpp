#include "Chef.h"
#include <iostream>



chef::chef(std::string chefname){



    name = chefname;
    std::cout << "Chef " << name << " constructor" << std::endl;






}



chef::~chef()
{
    std::cout << "Chef " << name << " destructor" << std::endl;
}



void chef::makesalad()
{
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void chef::makesoup()
{
    std::cout << "Chef " << name << " makes soup" << std::endl;
}
