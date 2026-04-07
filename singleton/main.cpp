#include <iostream>

#include "singleton.hpp"

int main() {
    OnlyOne& instance1 = OnlyOne::getInstance();
    OnlyOne& instance2 = OnlyOne::getInstance();

    std::cout << "instance1 адрес: " << &instance1 << std::endl;
    std::cout << "instance2 адрес: " << &instance2 << std::endl;

    if (&instance1 == &instance2) {
        std::cout << "всё чотка" << std::endl;
    }

    return 0;
}
