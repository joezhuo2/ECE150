#include <iostream>

// This program repeatedly queries the user for an
// integer until the user enters a value from 1
// through 99, inclusive.
//
// The condition of the while loop is simply 'true',
// so the loop will continue indefinitely unless a
// break statement is executed.
//
// Once the user enters an acceptable value, the
// break statement terminates the loop.

// Function declarations
int main();

// Function definitions
int main() {
    int n{};

    while ( true ) {
        std::cout << "Enter an integer from 1 through 99: ";
        std::cin  >> n;

        if ( (n >= 1) && (n <= 99) ) {
            break;
        }
    }

    std::cout << "You entered " << n << "."
              << std::endl;

    return 0;
}