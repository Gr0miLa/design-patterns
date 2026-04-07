#ifndef INVOKER_HPP
#define INVOKER_HPP

#include <stack>

#include "textEditor.hpp"
#include "command.hpp"

class Invoker {
private:
    std::stack<Command*> history;

public:
    void executeCommand(Command* cmd) {
        cmd->execute();
        history.push(cmd);
    }

    void undo() {
        if (!history.empty()) {
            Command* cmd = history.top();
            cmd->undo();
            history.pop();
            delete cmd;
        }
    }

    ~Invoker() {
        while (!history.empty()) {
            delete history.top();
            history.pop();
        }
    }
};

#endif // INVOKER_HPP
