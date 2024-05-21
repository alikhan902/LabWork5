#include "Stack.h"

// �����������
template <typename T>
Stack<T>::Stack(int initialCapacity)
    : capacity(initialCapacity), top(-1) {
    elements = new T[capacity];
}

// ����������
template <typename T>
Stack<T>::~Stack() {
    delete[] elements;
}

// ������� ��������� ������� ������� ���������
template <typename T>
void Stack<T>::resize(int newCapacity) {
    T* newElements = new T[newCapacity];
    for (int i = 0; i < capacity; ++i) {
        newElements[i] = elements[i];
    }
    delete[] elements;
    elements = newElements;
    capacity = newCapacity;
}

// ���������� �������� � ����
template <typename T>
void Stack<T>::push(const T& element) {
    if (top + 1 == capacity) {
        resize(capacity * 2);
    }
    elements[++top] = element;
}

// �������� �������� �������� �� �����
template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    --top;
}

// ��������� �������� �������� �� �����
template <typename T>
T Stack<T>::peek() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    return elements[top];
}

// ��������, ���� �� ����
template <typename T>
bool Stack<T>::isEmpty() const {
    return top == -1;
}

// ��������� �������� ������� �����
template <typename T>
int Stack<T>::size() const {
    return top + 1;
}
