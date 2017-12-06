#ifndef CPP_WASTE_RECYCLING_HELGAKALICZ_DUSTBIN_H
#define CPP_WASTE_RECYCLING_HELGAKALICZ_DUSTBIN_H

#include <vector>
#include "Garbage.h"
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
#include "DustbinContentError.h"

class Dustbin
{
public:
    Dustbin(std::string color = "black");

    std::string getColor();

    void throwOutGarbage(Garbage garbage);
    void listHouseWasteContent();

    void throwOutPaperGarbage(PaperGarbage garbage);
    void listPaperContent();

    void throwOutPlasticGarbage(PlasticGarbage garbage);
    void listPlasticContent();

    void emptyContents();

private:
    std::string color;
    std::vector<Garbage> houseWasteContent;
    std::vector<PaperGarbage> paperContent;
    std::vector<PlasticGarbage> plasticContent;
};


#endif //CPP_WASTE_RECYCLING_HELGAKALICZ_DUSTBIN_H
