#ifndef ISHAPE_HPP
#define ISHAPE_HPP

class IShape {
public:
    virtual ~IShape() = default;
    virtual void draw() = 0;
};

#endif // ISHAPE_HPP
