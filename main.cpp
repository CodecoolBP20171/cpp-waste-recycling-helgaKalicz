#include <iostream>
#include "Garbage.h"
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
#include "DustbinContentError.h"
#include "Dustbin.h"

/**
 *  Dustbin 9000 class from Dustbin class
 */
class Dustbin9000 : public Dustbin
{

};



int main()
{
    std::string str = "asd";
//    Garbage asd();
    Dustbin9000 db;

    PaperGarbage asd1("wow", true);
    std::cout << asd1.getName() << std::endl;
    PaperGarbage asd2("wow2", false);
    std::cout << asd2.getName() << std::endl;

    db.throwOutPaperGarbage(asd1);
    db.throwOutPaperGarbage(asd2);
    db.listPaperContent();
    return 0;
}
