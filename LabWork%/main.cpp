#include <iostream>
#include "Character.h"

int main() {
    setlocale(LC_ALL, "Russian");
    // Создаем персонажа
    Character character("Гордон", 4, 80, true);

    // Печатаем информацию о персонаже
    character.printCharacterInfo();

    // Персонаж выполняет действия
    character.performAction("Атака");
    character.performAction("Прыжок");
    character.performAction("Перезарядка");

    // Печатаем последнее действие
    character.printLastAction();

    // Отмена последнего действия
    character.undoAction();

    // Печатаем последнее действие после отмены
    character.printLastAction();

    return 0;
}