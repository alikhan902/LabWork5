#include "Character.h"
#include <iostream>

// �����������
Character::Character(const std::string& name, int tentacles, int strength, bool hasGrenadeLauncher)
    : name(name), tentacles(tentacles), strength(strength), hasGrenadeLauncher(hasGrenadeLauncher) {}

// ���������� �������� ����������
void Character::performAction(const std::string& action) {
    actions.push(action);
    std::cout << name << " ��������� ��������: " << action << std::endl;
}

// ������ ���������� �������� ���������
void Character::undoAction() {
    if (!actions.isEmpty()) {
        std::cout << name << " �������� ��������: " << actions.peek() << std::endl;
        actions.pop();
    }
    else {
        std::cout << name << " �� ����� �������� ��� ������." << std::endl;
    }
}

// ������ ���������� � ���������
void Character::printCharacterInfo() const {
    std::cout << "��������: " << name << std::endl;
    std::cout << "��������: " << tentacles << std::endl;
    std::cout << "����: " << strength << std::endl;
    std::cout << "����������: " << (hasGrenadeLauncher ? "��" : "���") << std::endl;
}

// ������ ���������� ������������ ��������
void Character::printLastAction() const {
    if (!actions.isEmpty()) {
        std::cout << "��������� ��������: " << actions.peek() << std::endl;
    }
    else {
        std::cout << "��� ����������� ��������." << std::endl;
    }
}