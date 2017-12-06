#ifndef CPP_WASTE_RECYCLING_HELGAKALICZ_PAPERGARBAGE_H
#define CPP_WASTE_RECYCLING_HELGAKALICZ_PAPERGARBAGE_H


#include "Garbage.h"

class PaperGarbage : public Garbage
{
public:
    explicit PaperGarbage(std::string name, bool isSqueezed = false);

    void sqeeze();
    bool getIsSqueezed();

protected:
    bool isSqueezed;
};


#endif //CPP_WASTE_RECYCLING_HELGAKALICZ_PAPERGARBAGE_H
