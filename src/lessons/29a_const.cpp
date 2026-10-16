#include <iostream>

/***************************************************
 * Constant local variables
 *
 * Sometimes you want to give a value a descriptive
 * name, but you do not want that value to change.
 *
 * Adding const to the declaration of a variable
 * prevents its value from being changed after it
 * has been initialized.
 *
 * For example,
 *
 *     int const answer{ 42 };
 *
 * declares answer to be an integer whose value is
 * 42. The compiler will not allow us to subsequently
 * assign a different value to answer.
 *
 * Because a constant cannot subsequently be assigned
 * a value, it should normally be initialized when it
 * is declared.
 *
 * Local constants exist only within the block in
 * which they are declared, just like other local
 * variables.
 ***************************************************/

int main() {
    int const answer{ 42 };
    double const pi{ 3.1415926535897932385 };

    // Constants can be used as operands in
    // expressions and can be printed just like
    // non-constant variables.
    std::cout << pi*pi << std::endl;
    std::cout << std::hex << (answer + 24)
              << std::dec << std::endl;

    // Constants can be used to initialize
    // non-constant variables.
    int n{ answer };

    // Constants may also appear on the right-hand
    // side of assignment operators.
    n = answer + 5 + 2;

    double g{ pi };

    std::cout << g << std::endl;

    g *= pi;

    std::cout << g << std::endl;

    // A constant cannot appear on the left-hand
    // side of an assignment operator.
    //
    // Uncomment either of the following statements
    // and the program will fail to compile:
    //
    // answer = 91;
    // pi = 3.14;

    return 0;
}