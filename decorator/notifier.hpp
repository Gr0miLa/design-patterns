#ifndef NOTIFIER_HPP
#define NOTIFIER_HPP

#include <iostream>
#include <string>
#include <memory>

class Notifier {
public:
    virtual ~Notifier() = default;
    virtual void send(const std::string& message) {
        std::cout << "Отправка на email: " << message << "\n";
    }
};

#endif // NOTIFIER_HPP
