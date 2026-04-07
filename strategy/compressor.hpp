#ifndef COMPRESSOR_HPP
#define COMPRESSOR_HPP

#include "compression.hpp"

class Compressor {
private:
    CompressionStrategy* strategy;

public:
    Compressor(CompressionStrategy* s = nullptr) : strategy(s) {}

    void setStrategy(CompressionStrategy* newStrategy) {
        strategy = newStrategy;
    }

    void compressData(const std::string& data) {
        if (strategy) {
            std::string result = strategy->compress(data);
            std::cout << result << std::endl;
        }
    }
};

#endif // COMPRESSOR_HPP
