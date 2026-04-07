#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include "notifier.hpp"

class NotifierDecorator : public Notifier {
protected:
    Notifier* wrapper;

public:
    NotifierDecorator(Notifier* n) : wrapper(n) {}
    
    void send(const std::string& message) override {
        if (wrapper) {
            wrapper->send(message);
        }
    }
};

class TelegramNotifierDecorator : public NotifierDecorator {
public:
    TelegramNotifierDecorator(Notifier* n) : NotifierDecorator(n) {}

    void send(const std::string& message) override {
        NotifierDecorator::send(message);
        std::cout << "В телегу: " << message << "\n";
    }
};

class SlackNotifierDecorator : public NotifierDecorator {
public:
    SlackNotifierDecorator(Notifier* n) : NotifierDecorator(n) {}

    void send(const std::string& message) override {
        NotifierDecorator::send(message);
        std::cout << "В slack: " << message << "\n";
    }
};

#endif // DECORATOR_HPP
