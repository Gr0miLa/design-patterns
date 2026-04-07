#include <iostream>

#include "invoker.hpp"

int main() {
    TextEditor editor;
    Invoker invoker;

    std::cout << "Вставка раз: ";
    invoker.executeCommand(new InsertCommand(editor, 0, "one"));
    editor.print();

    std::cout << "Вставка два: ";
    invoker.executeCommand(new InsertCommand(editor, 3, "two"));
    editor.print();

    std::cout << "Удаление раз: ";
    invoker.executeCommand(new DeleteCommand(editor, 0, 3));
    editor.print();

    invoker.undo();
    std::cout << "Отмена удаления: ";
    editor.print();

    invoker.undo();
    std::cout << "Отмена вставки: ";
    editor.print();

    return 0;
}
