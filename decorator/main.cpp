#include <iostream>

#include "decorator.hpp"

int main() {
    Notifier* notifier = new Notifier();
    notifier = new TelegramNotifierDecorator(notifier);
    notifier = new SlackNotifierDecorator(notifier);

    notifier->send("сообщение");

    delete notifier; 

    return 0;
}
