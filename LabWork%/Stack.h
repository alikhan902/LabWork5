#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept>

// ��������� ����� Stack (����)
template <typename T>
class Stack {
private:
    T* elements;      // ������ ��� �������� ��������� �����
    int capacity;     // ������� �����
    int top;          // ������ �������� �������� �����

    // ������� ��������� ������� ������� ���������
    void resize(int newCapacity);

public:
    // ����������� � ���������� ��������� ������� (�� ��������� 10)
    Stack(int initialCapacity = 10);

    // ����������
    ~Stack();

    // ���������� �������� � ����
    void push(const T& element);

    // �������� �������� �������� �� �����
    void pop();

    // ��������� �������� �������� �� �����
    T peek() const;

    // ��������, ���� �� ����
    bool isEmpty() const;

    // ��������� �������� ������� �����
    int size() const;
};

// �������� ���������� ���������� ������
#include "Stack.tpp"

#endif // STACK_H