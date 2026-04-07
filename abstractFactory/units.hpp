#ifndef UNITS_HPP
#define UNITS_HPP

#include <iostream>
#include <memory>
#include <string>

class Infantryman {
public:
    virtual ~Infantryman() {}
    virtual void info() = 0;
};

class Archer {
public:
    virtual ~Archer() {}
    virtual void info() = 0;
};

class Cavalryman {
public:
    virtual ~Cavalryman() {}
    virtual void info() = 0;
};

#endif // UNITS_HPP
