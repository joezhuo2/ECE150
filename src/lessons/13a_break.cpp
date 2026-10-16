#include <iostream>

// This program queries the user for three integers
// n0, n1, and n2 such that
//
//     n0 < n1 < n2.
//
// If the user enters an invalid value for n1 or n2,
// repeatedly query the user until an appropriate
// value is entered.
//
// Notice that each while loop has the condition
//
//     true
//
// and therefore continues indefinitely unless a
// break statement is executed.

// Function declarations
int main();

// Function definitions
int main() {
    int n0{};
    int n1{};
    int n2{};

    std::cout << "Enter a first integer: ";
    std::cin  >> n0;

    while ( true ) {
        std::cout << "Enter an integer greater than "
                  << n0 << ": ";
        std::cin  >> n1;

        if ( n1 > n0 ) {
            break;
        }
    }

    while ( true ) {
        std::cout << "Enter an integer greater than "
                  << n1 << ": ";
        std::cin  >> n2;

        if ( n2 > n1 ) {
            break;
        }
    }

    std::cout << "You entered "
              << n0 << ", "
              << n1 << ", and "
              << n2 << "." << std::endl;

    return 0;
}