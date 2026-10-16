#include <iostream>

// This example demonstrates that the loop variable
// in a for loop can be modified both by the update
// expression and within the body of the loop.
//
// It also demonstrates why the scope of a variable
// can matter after a loop has terminated.

// Function declarations
int main();

// Function definitions
int main() {
    int k{};

    // In this for loop, 'k' is incremented by the
    // update expression ++k at the end of each
    // iteration. However, the user may also change
    // 'k' within the body of the loop.
    //
    // Because 'k' was declared before the for loop,
    // it remains in scope after the loop terminates.
    // We can therefore print the value of 'k' that
    // caused the condition k < 20 to become false.
    //
    // Notice that 'k' may increase by more than one
    // during an iteration:
    //
    //   1. the user enters a value that is added
    //      to 'k', and
    //   2. ++k is then executed before the loop
    //      condition is tested again.

    for ( k = 0; k < 20; ++k ) {
        std::cout << "k = " << k << std::endl;

        int value{};
        std::cout << "Add what to 'k'? ";
        std::cin  >> value;

        k += value;

        std::cout << "The value of 'k' is now "
                  << k << "." << std::endl
                  << std::endl;
    }

    std::cout << "The final value of 'k' is "
              << k << "." << std::endl;

    return 0;
}