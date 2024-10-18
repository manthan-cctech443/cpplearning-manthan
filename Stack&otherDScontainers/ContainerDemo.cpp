#include "ContainerDemo.h"

void ContainerDemo::demonstrateVectors() {
    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    vec.push_back(6);
    std::cout << "Vector contents: ";
    for (int num : vec) std::cout << num << " ";
    std::cout << std::endl;
}

void ContainerDemo::demonstrateLists() {
    std::list<int> lst = { 1, 2, 3, 4, 5 };
    lst.push_front(0);
    std::cout << "List contents: ";
    for (int num : lst) std::cout << num << " ";
    std::cout << std::endl;
}

void ContainerDemo::demonstrateQueues() {
    std::queue<int> q;
    for (int i = 1; i <= 5; ++i) q.push(i);
    std::cout << "Queue contents: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}
