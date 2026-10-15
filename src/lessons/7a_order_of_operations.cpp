#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    // Multiplications are performed before additions
    // and subtractions. This is called operator
    // precedence.
    //
    // When additions and subtractions appear together,
    // they are performed from left to right.
    //
    // Calculate each of these expressions by hand
    // before executing this code.

    std::cout << (1 + 2 + 3 + 4 * 5 * 6 + 7 + 8 + 9)
              << std::endl;
    std::cout << (1 * 2 * 3 + 4 * 5 * 6 + 7 + 8 + 9)
              << std::endl;
    std::cout << (1 * 2 * 3 * 4 * 5 + 6 + 7 + 8 + 9)
              << std::endl;

    // This expression first calculates 1*2*3*4*5,
    // 6*7 and 8*9, resulting in
    //
    //     120 - 42 + 72
    //
    // Addition and subtraction have the same precedence,
    // so they are performed from left to right. Thus,
    // 120 - 42 is calculated before 72 is added.
    //
    // If you wanted 120 - (42 + 72), you would have
    // to use parentheses.

    std::cout << (1 * 2 * 3 * 4 * 5 - 6 * 7 + 8 * 9)
              << std::endl;

    // For example, the expression
    //
    //     3 - 4 * 5 + 7
    //
    // is evaluated as follows:
    //
    //     First:    4 * 5 = 20
    //     Next:    3 - 20 = -17
    //     Finally: -17 + 7 = -10
    //
    // Parentheses can be used to change the order in
    // which the operations are performed.

    std::cout << "Different groupings of 3 - 4 * 5 + 7:"
              << std::endl;

    std::cout << ( 3 -  4 * 5 + 7)   << std::endl;
    std::cout << ( 3 - (4 * 5 + 7))  << std::endl;
    std::cout << ((3 - 4) * 5 + 7)   << std::endl;
    std::cout << ((3 - 4) * (5 + 7)) << std::endl;
    std::cout << ( 3 -  4 * (5 + 7)) << std::endl;

    return 0;
}