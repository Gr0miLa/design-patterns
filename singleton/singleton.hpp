#include <iostream>


template<typename Type>
class Singleton {
protected:
    Singleton() {}

public:
    static Type& getInstance() {
        static Type instance;
        return instance;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

class OnlyOne : public Singleton<OnlyOne> {
    friend class Singleton<OnlyOne>;
    OnlyOne() {
        std::cout << "конструктор OnlyOne\n";
    }
};