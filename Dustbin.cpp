//
// Created by kalicz on 2017.10.23..
//

#include "Dustbin.h"

Dustbin::Dustbin(std::string color) {
    this->color = color;
    std::cout << "You bought a(n) " << color << " colored dustbin." << std::endl;
}

std::string Dustbin::getColor() { return this->color; }

void Dustbin::throwOutGarbage(Garbage garbage) { houseWasteContent.push_back(garbage); }

void Dustbin::listHouseWasteContent() { for (Garbage garbage : houseWasteContent) std::cout << garbage.getName() << std::endl; }

void Dustbin::throwOutPaperGarbage(PaperGarbage garbage) {
    if (garbage.getIsSqueezed()) { paperContent.push_back(garbage); }
    else { DustbinContentError error(1); }
}

void Dustbin::listPaperContent() { for (PaperGarbage garbage : paperContent) std::cout << garbage.getName() << std::endl; }

void Dustbin::throwOutPlasticGarbage(PlasticGarbage garbage) {
    if (garbage.getIsClean()) { plasticContent.push_back(garbage); }
    else { DustbinContentError error(2); }
}

void Dustbin::listPlasticContent() { for (PlasticGarbage garbage : plasticContent) std::cout << garbage.getName() << std::endl; }

void Dustbin::emptyContents() { houseWasteContent.clear(); paperContent.clear(); plasticContent.clear(); }
