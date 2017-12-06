#ifndef CPP_WASTE_RECYCLING_HELGAKALICZ_PLASTICGARBAGE_H
#define CPP_WASTE_RECYCLING_HELGAKALICZ_PLASTICGARBAGE_H


#include "Garbage.h"

class PlasticGarbage : public Garbage
{
public:
    explicit PlasticGarbage(std::string name, bool isClean = false);

    void clean();
    bool getIsClean();

protected:
    bool isClean;
};


#endif //CPP_WASTE_RECYCLING_HELGAKALICZ_PLASTICGARBAGE_H
