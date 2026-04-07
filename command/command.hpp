#ifndef COMMAND_HPP
#define COMMAND_HPP

#include "textEditor.hpp"

class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
    virtual void undo() = 0;
};

class InsertCommand : public Command {
private:
    TextEditor& editor;
    int pos;
    std::string str;

public:
    InsertCommand(TextEditor& ed, int p, const std::string& s) 
        : editor(ed), pos(p), str(s) {}

    void execute() override {
        editor.insert(pos, str);
    }

    void undo() override {
        editor.erase(pos, str.length());
    }
};

class DeleteCommand : public Command {
private:
    TextEditor& editor;
    int pos;
    int count;
    std::string deletedText;

public:
    DeleteCommand(TextEditor& ed, int p, int c) 
        : editor(ed), pos(p), count(c) {}

    void execute() override {
        deletedText = editor.getTextContent(pos, count);
        editor.erase(pos, count);
    }

    void undo() override {
        editor.insert(pos, deletedText);
    }
};

#endif // COMMAND_HPP
