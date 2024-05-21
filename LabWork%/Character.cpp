#include "Character.h"
#include <iostream>

// Конструктор
Character::Character(const std::string& name, int tentacles, int strength, bool hasGrenadeLauncher)
    : name(name), tentacles(tentacles), strength(strength), hasGrenadeLauncher(hasGrenadeLauncher) {}

// Выполнение действия персонажем
void Character::performAction(const std::string& action) {
    actions.push(action);
    std::cout << name << " выполняет действие: " << action << std::endl;
}

// Отмена последнего действия персонажа
void Character::undoAction() {
    if (!actions.isEmpty()) {
        std::cout << name << " отменяет действие: " << actions.peek() << std::endl;
        actions.pop();
    }
    else {
        std::cout << name << " не имеет действий для отмены." << std::endl;
    }
}

// Печать информации о персонаже
void Character::printCharacterInfo() const {
    std::cout << "Персонаж: " << name << std::endl;
    std::cout << "Щупальца: " << tentacles << std::endl;
    std::cout << "Сила: " << strength << std::endl;
    std::cout << "Гранатомет: " << (hasGrenadeLauncher ? "да" : "нет") << std::endl;
}

// Печать последнего выполненного действия
void Character::printLastAction() const {
    if (!actions.isEmpty()) {
        std::cout << "Последнее действие: " << actions.peek() << std::endl;
    }
    else {
        std::cout << "Нет выполненных действий." << std::endl;
    }
}