#include "Stack.h"

// Конструктор
template <typename T>
Stack<T>::Stack(int initialCapacity)
    : capacity(initialCapacity), top(-1) {
    elements = new T[capacity];
}

// Деструктор
template <typename T>
Stack<T>::~Stack() {
    delete[] elements;
}

// Функция изменения размера массива элементов
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

// Добавление элемента в стек
template <typename T>
void Stack<T>::push(const T& element) {
    if (top + 1 == capacity) {
        resize(capacity * 2);
    }
    elements[++top] = element;
}

// Удаление верхнего элемента из стека
template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    --top;
}

// Получение верхнего элемента из стека
template <typename T>
T Stack<T>::peek() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    return elements[top];
}

// Проверка, пуст ли стек
template <typename T>
bool Stack<T>::isEmpty() const {
    return top == -1;
}

// Получение текущего размера стека
template <typename T>
int Stack<T>::size() const {
    return top + 1;
}
