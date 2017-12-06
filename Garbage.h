#include <iostream>

#ifndef CPP_WASTE_RECYCLING_HELGAKALICZ_GARBAGE_H
#define CPP_WASTE_RECYCLING_HELGAKALICZ_GARBAGE_H


class Garbage {
public:
    Garbage(std::string name = "Garbage");
    std::string getName();
protected:
    std::string name;
};


#endif //CPP_WASTE_RECYCLING_HELGAKALICZ_GARBAGE_H
