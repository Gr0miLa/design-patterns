#ifndef FACTORY_HPP
#define FACTORY_HPP

#include "orcs.hpp"
#include "humans.hpp"

class ArmyFactory {
public:
    virtual ~ArmyFactory() {}
    virtual Infantryman* createInfantryman() = 0;
    virtual Archer* createArcher() = 0;
    virtual Cavalryman* createCavalryman() = 0;
};

class HumanArmyFactory : public ArmyFactory {
public:
    Infantryman* createInfantryman() override { 
        return new HumanInfantryman(); 
    }
    Archer* createArcher() override { 
        return new HumanArcher(); 
    }
    Cavalryman* createCavalryman() override { 
        return new HumanCavalryman(); 
    }
};

class OrcArmyFactory : public ArmyFactory {
public:
    Infantryman* createInfantryman() override { 
        return new OrcInfantryman(); 
    }
    Archer* createArcher() override { 
        return new OrcArcher(); 
    }
    Cavalryman* createCavalryman() override { 
        return new OrcCavalryman(); 
    }
};

#endif // FACTORY_HPP
