#include <iostream>

// Write a program that asks the user for three values
// 'x', 'y' and 'z', and prints the maximum of the three.
//
// For example, if the user enters
//
//     x = 3.2
//     y = 7.1
//     z = 4.5
//
// the program should print
//
//     max(x, y, z) = 7.1
//
// Remember that two or even all three values may be equal.
//
// You can determine the maximum using a cascading
// conditional statement.

// Function declarations
int main();

// Function definitions
int main() {
    double x{};

    std::cout << "Enter a value 'x': ";
    std::cin >> x;

    double y{};

    std::cout << "Enter a value 'y': ";
    std::cin >> y;

    double z{};

    std::cout << "Enter a value 'z': ";
    std::cin >> z;

    // First determine whether 'x' is at least as large
    // as both 'y' and 'z'.
    //
    // The parentheses around the two comparisons are not
    // required:
    //
    //     if ( x >= y && x >= z ) {
    //
    // is equivalent. However,
    //
    //     if ( (x >= y) && (x >= z) ) {
    //
    // visually emphasizes that two comparisons are being
    // combined using the logical AND operator.

    if ( (x >= y) && (x >= z) ) {
        std::cout << "max(x, y, z) = "
                  << x << std::endl;
    } else if ( y >= z ) {
        // The first condition was false, so 'x' cannot
        // be the maximum. We therefore only need to
        // compare 'y' and 'z'.

        std::cout << "max(x, y, z) = "
                  << y << std::endl;
    } else {
        // We already know that 'x' is not the maximum,
        // and the previous condition tells us that
        //
        //     y < z.
        //
        // Therefore, 'z' must be the maximum.

        std::cout << "max(x, y, z) = "
                  << z << std::endl;
    }

    return 0;
}