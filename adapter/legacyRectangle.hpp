#ifndef LEGACYRECTANGLE_HPP
#define LEGACYRECTANGLE_HPP

#include <iostream>

class LegacyRectangle {
public:
    void drawRect(int x1, int y1, int x2, int y2) {
        std::cout << "LegacyRectangle координаты\n" <<
        "(" << x1 << ", " << y1 << "), " <<
        "(" << x1 << ", " << y2 << "), " <<
        "(" << x2 << ", " << y1 << "), " <<
        "(" << x2 << ", " << y2 << ")\n";
    }
};

#endif // LEGACYRECTANGLE_HPP
