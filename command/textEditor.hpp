#ifndef TEXTEDITOR_HPP
#define TEXTEDITOR_HPP

#include <iostream>
#include <string>
#include <vector>

class TextEditor {
private:
    std::string text;

public:
    void insert(int pos, const std::string& str) {
        if (pos <= text.length()) {
            text.insert(pos, str);
        }
    }

    void erase(int pos, int count) {
        if (pos < text.length()) {
            text.erase(pos, count);
        }
    }

    std::string getTextContent(int pos, int count) const {
        return text.substr(pos, count);
    }

    void print() const {
        std::cout << text << "\n";
    }
};

#endif // TEXTEDITOR_HPP
