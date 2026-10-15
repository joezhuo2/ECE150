/**********************************
 * Recall that when you perform
 * integer division, any fractional
 * part is discarded. This is
 * equivalent to truncating the
 * result toward zero.
 *
 * For example,
 *
 *     15/7 = 2
 *
 * because 15/7 is approximately
 * 2.14, and the fractional part
 * is discarded.
 *
 * Can you find an integer
 * arithmetic calculation that
 * instead rounds the result up
 * when both integers are positive?
 **********************************/

// Function declarations
int main();

// Function definitions
int main() {
    int m{ 7 };

    // First, observe what ordinary integer division does.

    // These output 2.
    std::cout << 14/m << std::endl;
    std::cout << 15/m << std::endl;
    std::cout << 20/m << std::endl;

    // These output 3.
    std::cout << 21/m << std::endl;
    std::cout << 22/m << std::endl;
    std::cout << 27/m << std::endl;

    // These output 4.
    std::cout << 28/m << std::endl;
    std::cout << 29/m << std::endl;
    std::cout << std::endl;

    // Now change each calculation below so that the
    // result is rounded up whenever there is a
    // nonzero remainder.
    //
    // You may use only integer arithmetic.

    // This should output 2.
    std::cout << (14 + m - 1)/m << std::endl;

    // These should output 3.
    std::cout << (15 + m - 1)/m << std::endl;
    std::cout << (20 + m - 1)/m << std::endl;
    std::cout << (21 + m - 1)/m << std::endl;

    // These should output 4.
    std::cout << (22 + m - 1)/m << std::endl;
    std::cout << (27 + m - 1)/m << std::endl;
    std::cout << (28 + m - 1)/m << std::endl;

    // This should output 5.
    std::cout << (29 + m - 1)/m << std::endl;

    return 0;
}