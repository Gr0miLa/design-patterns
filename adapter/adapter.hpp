#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include <iostream>

#include "IShape.hpp"
#include "legacyRectangle.hpp"

class RectangleAdapter : public IShape {
private:
    LegacyRectangle* legacyRect;
    int x, y, width, height;

public:
    RectangleAdapter(int x, int y, int w, int h) 
        : x(x), y(y), width(w), height(h) {
        legacyRect = new LegacyRectangle();
    }

    ~RectangleAdapter() {
        delete legacyRect;
    }

    void draw() override {
        int x1 = x - width / 2;
        int y1 = y - height / 2;
        int x2 = x + width / 2;
        int y2 = y + height / 2;
        legacyRect->drawRect(x1, y1, x2, y2);
    }
};

#endif // ADAPTER_HPP
