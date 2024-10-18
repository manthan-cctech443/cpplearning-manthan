#pragma once
#include <vector>
#include <iostream>

template <typename T>
class MyStack {
private:
    std::vector<T> stack;
    size_t capacity;

public:
    MyStack(size_t cap);
    void push(const T& value);
    void pop();
    T top() const;
    bool isEmpty() const;
    size_t size() const;
    void display() const;
};

// Explicit instantiation declaration
extern template class MyStack<int>;  // Declaration for int specialization
