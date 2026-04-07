#ifndef COMPRESSION_HPP
#define COMPRESSION_HPP

#include "compressionStrategy.hpp"

class ZipCompression : public CompressionStrategy {
public:
    std::string compress(const std::string& data) override {
        std::cout << "ZIP архиватор" << std::endl;
        return "compressed: " + data;
    }
};

class RarCompression : public CompressionStrategy {
public:
    std::string compress(const std::string& data) override {
        std::cout << "RAR архиватор" << std::endl;
        return "compressed: " + data;
    }
};

#endif // COMPRESSION_HPP
