/***********************************
 * Modify this program so that it
 * determines whether an integer
 * entered by the user is even or
 * odd and prints the result.
 *
 * Be careful about negative
 * integers.
 ***********************************/

#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    int n{};

    std::cout << "Enter an integer: ";
    std::cin >> n;

    // Modify the following statement so that the
    // program correctly identifies both even and
    // odd integers.

    std::cout << n << (n % 2 == 0 ? " is even." : " is odd.") << std::endl;

    return 0;
}
