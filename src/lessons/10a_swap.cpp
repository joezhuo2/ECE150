#include <iostream>

// This program demonstrates how to swap the values
// stored in two local variables.

// Function declarations
int main();

// Function definitions
int main() {
    double x{};

    std::cout << "Enter a number: ";
    std::cin >> x;

    double y{};

    std::cout << "Enter another number: ";
    std::cin >> y;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    // To swap the values stored in two local variables,
    // we must
    //
    //     1. Store the value of one variable in a
    //        temporary variable.
    //
    //     2. Assign the value of the second variable
    //        to the first.
    //
    //     3. Assign the temporarily stored value to
    //        the second variable.
    //
    // The temporary variable is necessary because an
    // assignment such as
    //
    //     x = y;
    //
    // replaces the value previously stored in 'x'.

    std::cout << "Swapping 'x' and 'y'..." << std::endl;

    // Declare 'tmp' to be a local variable and initialize
    // it with the value currently stored in 'x'.
    double tmp{ x };

    // Assign to 'x' the value currently stored in 'y'.
    x = y;

    // Assign to 'y' the original value of 'x', which was
    // temporarily stored in 'tmp'.
    y = tmp;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}