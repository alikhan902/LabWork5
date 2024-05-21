#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Stack.h"

// Класс, моделирующий персонажа компьютерной игры
class Character {
private:
    std::string name;               // Имя персонажа
    int tentacles;                  // Количество щупалец
    int strength;                   // Сила
    bool hasGrenadeLauncher;        // Наличие гранатомета
    Stack<std::string> actions;     // Стек для хранения действий персонажа

public:
    // Конструктор
    Character(const std::string& name, int tentacles, int strength, bool hasGrenadeLauncher);

    // Выполнение действия персонажем
    void performAction(const std::string& action);

    // Отмена последнего действия персонажа
    void undoAction();

    // Печать информации о персонаже
    void printCharacterInfo() const;

    // Печать последнего выполненного действия
    void printLastAction() const;
};

#endif // CHARACTER_H