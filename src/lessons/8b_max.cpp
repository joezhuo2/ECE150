#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    double x{};

    std::cout << "Enter a number 'x': ";
    std::cin >> x;

    double y{};

    std::cout << "Enter a number 'y': ";
    std::cin >> y;

    // Print the maximum of the two values entered
    // by the user.
    //
    // If x >= y, then 'x' is the maximum. Otherwise,
    // x < y, so 'y' must be the maximum.

    if ( x >= y ) {
        std::cout << "max(x, y) = " << x << std::endl;
    } else {
        std::cout << "max(x, y) = " << y << std::endl;
    }

    return 0;
}