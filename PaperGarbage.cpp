//
// Created by kalicz on 2017.10.20..
//

#include "PaperGarbage.h"

PaperGarbage::PaperGarbage(std::string name, bool isSqueezed)
{
    this->name = name;
    this->isSqueezed = isSqueezed;
}

void PaperGarbage::sqeeze() { isSqueezed = true; }

bool PaperGarbage::getIsSqueezed() { return this->isSqueezed; }