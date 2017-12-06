//
// Created by kalicz on 2017.10.20..
//

#include "PlasticGarbage.h"

PlasticGarbage::PlasticGarbage(std::string name, bool isClean) {
    this->name = name;
    this->isClean = isClean;
}

void PlasticGarbage::clean() { isClean = true; }

bool PlasticGarbage::getIsClean() { return this->isClean; }