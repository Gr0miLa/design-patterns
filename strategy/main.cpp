#include <iostream>

#include "compressor.hpp"

int main() {
    Compressor archiver;

    ZipCompression zip;
    RarCompression rar;

    std::string myData = "Какое-то сообщение";

    archiver.setStrategy(&zip);
    archiver.compressData(myData);

    archiver.setStrategy(&rar);
    archiver.compressData(myData);

    return 0;
}
