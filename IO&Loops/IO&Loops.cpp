#include "InputOutputManager.h"
#include "LoopTester.h"

int main() {
    InputOutputManager ioManager;
    LoopTester loopTester;

    ioManager.getUserInput();
    loopTester.testForLoop();
    loopTester.testWhileLoop();
    loopTester.testNestedLoop();

    return 0;
}




