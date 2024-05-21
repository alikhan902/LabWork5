#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept>

// Шаблонный класс Stack (Стек)
template <typename T>
class Stack {
private:
    T* elements;      // Массив для хранения элементов стека
    int capacity;     // Емкость стека
    int top;          // Индекс верхнего элемента стека

    // Функция изменения размера массива элементов
    void resize(int newCapacity);

public:
    // Конструктор с параметром начальной емкости (по умолчанию 10)
    Stack(int initialCapacity = 10);

    // Деструктор
    ~Stack();

    // Добавление элемента в стек
    void push(const T& element);

    // Удаление верхнего элемента из стека
    void pop();

    // Получение верхнего элемента из стека
    T peek() const;

    // Проверка, пуст ли стек
    bool isEmpty() const;

    // Получение текущего размера стека
    int size() const;
};

// Включаем реализацию шаблонного класса
#include "Stack.tpp"

#endif // STACK_H