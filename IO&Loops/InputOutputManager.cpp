#include "InputOutputManager.h"

void InputOutputManager::getUserInput() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (std::cin.fail()) {
        std::cerr << "Invalid input! Expected an integer.\n";
        std::cin.clear();  // Clear the error flag
        std::cin.ignore(1000, '\n');  // Ignore the wrong input
    }
    else {
        std::cout << "You entered: " << number << std::endl;
    }
}

void InputOutputManager::outputResult(int result) {
    std::cout << "The result is: " << result << std::endl;
}
