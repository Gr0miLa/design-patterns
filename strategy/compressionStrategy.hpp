#ifndef COMPRESSIONSTRATEGY_HPP
#define COMPRESSIONSTRATEGY_HPP

#include <iostream>
#include <string>

class CompressionStrategy {
public:
    virtual ~CompressionStrategy() = default;
    virtual std::string compress(const std::string& data) = 0;
};

#endif // COMPRESSIONSTRATEGY_HPP
