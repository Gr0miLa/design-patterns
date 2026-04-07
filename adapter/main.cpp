#include <iostream>

#include "adapter.hpp"

int main() {
    int centerX = 0;
    int centerY = 0;
    int width = 20;
    int height = 10;

    IShape* shape = new RectangleAdapter(centerX, centerY, width, height);

    std::cout << "центр в координатах " <<
        "(" << centerX << ", " << centerY << ")\n" << 
        "ширина " << width << ", "
        "высота " << height << "\n";
    shape->draw();

    delete shape;
    return 0;
}
