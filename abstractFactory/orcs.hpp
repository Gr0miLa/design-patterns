#ifndef ORCS_HPP
#define ORCS_HPP

#include "units.hpp"

class OrcInfantryman : public Infantryman {
public:
    void info() override { 
        std::cout << "орк пехотинец\n"; 
    }
};

class OrcArcher : public Archer {
public:
    void info() override { 
        std::cout << "орк лучник\n"; 
    }
};

class OrcCavalryman : public Cavalryman {
public:
    void info() override { 
        std::cout << "орк всадник\n"; 
    }
};


#endif // ORCS_HPP