#ifndef CHEF_H
#define CHEF_H
#include <string>


class chef

{
public:

    chef(std::string chefname);
    ~chef();

    void makesalad();
    void makesoup();


protected:

    std::string name;



};



#endif // CHEF_H
