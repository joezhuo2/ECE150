#include <iostream>

/***************************************************
 * Hexadecimal representation
 *
 * We normally write integers using base 10. For
 * example,
 *
 *     472 = 4(100) + 7(10) + 2(1)
 *
 *         = 4(10^2) + 7(10^1) + 2(10^0).
 *
 * In the previous example, we looked at binary,
 * or base 2. In binary, each digit is either 0 or 1,
 * and the positions represent powers of 2.
 *
 * Another representation commonly used when working
 * with computers is hexadecimal, or base 16.
 *
 * In hexadecimal, the positions represent powers
 * of 16:
 *
 *       3      2      1      0
 *     16     16     16     16
 *
 * or
 *
 *     4096    256     16      1.
 *
 * A single hexadecimal digit must be able to
 * represent any value from 0 through 15. We already
 * have the ten digits
 *
 *     0 1 2 3 4 5 6 7 8 9
 *
 * so the letters a through f are used for the
 * remaining six values:
 *
 *     hexadecimal    decimal
 *
 *          a            10
 *          b            11
 *          c            12
 *          d            13
 *          e            14
 *          f            15
 *
 * For example, the hexadecimal number
 *
 *     2a
 *
 * represents
 *
 *     2(16) + 10(1)
 *
 *         = 32 + 10
 *
 *         = 42.
 *
 * Thus,
 *
 *     42 in decimal = 2a in hexadecimal.
 *
 * Hexadecimal is particularly useful in computing
 * because one hexadecimal digit corresponds exactly
 * to four binary digits:
 *
 *     hexadecimal    binary
 *
 *          0          0000
 *          1          0001
 *          2          0010
 *          3          0011
 *          4          0100
 *          5          0101
 *          6          0110
 *          7          0111
 *          8          1000
 *          9          1001
 *          a          1010
 *          b          1011
 *          c          1100
 *          d          1101
 *          e          1110
 *          f          1111
 *
 * Consequently,
 *
 *     42 = 0010 1010 in binary
 *        =    2    a in hexadecimal
 *        = 2a.
 *
 * The C++ standard library provides a simple way
 * to print integers in hexadecimal.
 ***************************************************/

// Function declaration
int main();

// Function definition
int main() {
    for ( int k{ 0 }; k <= 33; ++k ) {
        std::cout << k << "\t"
                  << std::hex << k
                  << std::dec << std::endl;
    }

    std::cout << 42 << "\t"
              << std::hex << 42
              << std::dec << std::endl;

    while ( true ) {
        int n{};

        std::cout << "Enter a positive integer (0 to quit): ";
        std::cin  >> n;

        if ( n == 0 ) {
            break;
        } else if ( n > 0 ) {
            std::cout << n << "\t"
                      << std::hex << n
                      << std::dec << std::endl;
        }
    }

    return 0;
}