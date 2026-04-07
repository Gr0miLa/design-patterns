#ifndef HUMANS_HPP
#define HUMANS_HPP

#include "units.hpp"

class HumanInfantryman : public Infantryman {
public:
    void info() override { 
        std::cout << "человек пехотинец\n";
    }
};

class HumanArcher : public Archer {
public:
    void info() override { 
        std::cout << "человек лучник\n"; 
    }
};

class HumanCavalryman : public Cavalryman {
public:
    void info() override { 
        std::cout << "человек всадник\n"; 
    }
};


#endif // HUMANS_HPP