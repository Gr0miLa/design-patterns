#include <iostream>

#include "factory.hpp"

void createArmy(ArmyFactory& factory) {
    Infantryman* inf = factory.createInfantryman();
    Archer* arc = factory.createArcher();
    Cavalryman* cav = factory.createCavalryman();

    inf->info();
    arc->info();
    cav->info();

    delete inf;
    delete arc;
    delete cav;
}

int main() {
    std::cout << "армия людей\n";
    HumanArmyFactory hFactory;
    createArmy(hFactory);

    std::cout << "армия орков\n";
    OrcArmyFactory oFactory;
    createArmy(oFactory);

    return 0;
}