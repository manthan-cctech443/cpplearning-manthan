#include "MyStack.h"
#include "ContainerDemo.h"
#include <iostream>

int main() {
    // Stack demonstration
    MyStack<int> stack(5); // Stack with capacity of 5
    stack.push(1);
    stack.push(2);
    stack.push(3);
    std::cout << "Stack contents after pushes: ";
    stack.display();

    std::cout << "Top element: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "Stack contents after pop: ";
    stack.display();

    // Container demonstration
    ContainerDemo demo;
    demo.demonstrateVectors();
    demo.demonstrateLists();
    demo.demonstrateQueues();

    return 0;
}

