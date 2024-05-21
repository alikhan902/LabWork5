#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Stack.h"

// �����, ������������ ��������� ������������ ����
class Character {
private:
    std::string name;               // ��� ���������
    int tentacles;                  // ���������� �������
    int strength;                   // ����
    bool hasGrenadeLauncher;        // ������� �����������
    Stack<std::string> actions;     // ���� ��� �������� �������� ���������

public:
    // �����������
    Character(const std::string& name, int tentacles, int strength, bool hasGrenadeLauncher);

    // ���������� �������� ����������
    void performAction(const std::string& action);

    // ������ ���������� �������� ���������
    void undoAction();

    // ������ ���������� � ���������
    void printCharacterInfo() const;

    // ������ ���������� ������������ ��������
    void printLastAction() const;
};

#endif // CHARACTER_H