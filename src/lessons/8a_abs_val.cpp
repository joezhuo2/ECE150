#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    double x{};

    std::cout << "Enter a number 'x': ";
    std::cin >> x;

    // The absolute value of 'x' is defined as follows:
    //
    //     If x >= 0, then |x| = x.
    //     If x <  0, then |x| = -x.
    //
    // We can implement these two cases using an
    // if-else statement.

    if ( x >= 0 ) {
        std::cout << "|x| = " << x << std::endl;
    } else {
        std::cout << "|x| = " << (-x) << std::endl;
    }

    return 0;
}