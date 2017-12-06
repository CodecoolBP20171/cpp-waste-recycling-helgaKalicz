#include "DustbinContentError.h"

DustbinContentError::DustbinContentError(int errorCode) {
    switch (errorCode) {
        case (0): { std::cout << "Your garbage is full.\n"; break; }
        case (1): { std::cout << "Your garbage is not clean.\n"; break; }
        case (2): { std::cout << "Your garbage is not squeezed.\n"; break; }
        case (3): { std::cout << "Your garbage is not pink.\n"; break; }
        default: { break; }
    }
}

DustbinContentError::~DustbinContentError() = default;
