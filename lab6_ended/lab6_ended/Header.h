#pragma once
using namespace std;
#include <iostream>

class SelfErrors {
    public:
        SelfErrors(int id);

        enum errorsCodes {
        LESS_THEN_ZERO,
        YOU_DIDNT_BORN,
        BORN_IN_FUTURE,
        RIGHT
        };
};

SelfErrors::SelfErrors(int id) {
    if (id == YOU_DIDNT_BORN)
        std::cout << "Can`t beleave\n";
    else if (id == BORN_IN_FUTURE)
        std::cout << "How can u born in future\n";
    else if (id == LESS_THEN_ZERO)
        std::cout << "Hi dinosaur\n";
    else if (id == RIGHT)
        std::cout << "Thank\n";
}