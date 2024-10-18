#include "MyStack.h"

// Explicit instantiation for int type
template class MyStack<int>;

template <typename T>
MyStack<T>::MyStack(size_t cap) : capacity(cap) {}

template <typename T>
void MyStack<T>::push(const T& value) {
    if (stack.size() >= capacity) {
        std::cerr << "Stack overflow!" << std::endl;
        return;
    }
    stack.push_back(value);
}

template <typename T>
void MyStack<T>::pop() {
    if (stack.empty()) {
        std::cerr << "Stack underflow!" << std::endl;
        return;
    }
    stack.pop_back();
}

template <typename T>
T MyStack<T>::top() const {
    if (stack.empty()) {
        throw std::runtime_error("Stack is empty!");
    }
    return stack.back();
}

template <typename T>
bool MyStack<T>::isEmpty() const {
    return stack.empty();
}

template <typename T>
size_t MyStack<T>::size() const {
    return stack.size();
}

template <typename T>
void MyStack<T>::display() const {
    for (const T& item : stack) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}
