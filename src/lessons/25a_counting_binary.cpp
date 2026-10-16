#include <bitset>
#include <iostream>
#include <string>

/***************************************************
 * Binary representation
 *
 * We normally write integers using base 10. For
 * example,
 *
 *     472 = 4(100) + 7(10) + 2(1).
 *
 * The positions represent powers of 10:
 *
 *       2     1     0
 *     10    10    10
 *
 * Computers store information using bits, each of
 * which can have one of two values: 0 or 1. Thus,
 * it is useful to represent integers in base 2,
 * called binary.
 *
 * In binary, the positions represent powers of 2:
 *
 *       4    3    2    1    0
 *      2    2    2    2    2
 *
 * or
 *
 *     16    8    4    2    1.
 *
 * For example, the binary number
 *
 *     101010
 *
 * represents
 *
 *     1(32) + 0(16) + 1(8)
 *           + 0(4) + 1(2) + 0(1)
 *
 *         = 32 + 8 + 2
 *
 *         = 42.
 *
 * Thus,
 *
 *     42 in decimal = 101010 in binary.
 *
 * In this example, we will write two functions.
 *
 * The first determines how many binary digits, or
 * bits, are required to represent a non-negative
 * integer.
 *
 * The second uses std::bitset to create the binary
 * representation of an integer and then removes
 * the unnecessary leading zeros.
 ***************************************************/

// Function declarations
int main();
int number_of_bits( int n );
std::string to_binary( int n );

// Function definitions
int main() {
    for ( int k{ 0 }; k <= 33; ++k ) {
        std::cout << k << "\t"
                  << to_binary( k ) << std::endl;
    }

    std::cout << 42 << "\t"
              << to_binary( 42 ) << std::endl;

    while ( true ) {
        int n{};

        std::cout << "Enter a positive integer (0 to quit): ";
        std::cin  >> n;

        if ( n == 0 ) {
            break;
        } else if ( n > 0 ) {
            std::cout << n << "\t"
                      << to_binary( n ) << std::endl;
        }
    }

    return 0;
}

// int number_of_bits( ... )
//
// @param n    a non-negative integer
//
// @returns    the number of bits required to represent
//             n in binary
//
// Consider the positive integer 42. Repeatedly dividing
// by 2 using integer division gives
//
//     42
//     21
//     10
//      5
//      2
//      1
//      0
//
// It takes six divisions to reach zero. Consequently,
// six bits are required to represent 42:
//
//     42 = 101010
//          ------
//          6 bits
//
// Similarly,
//
//      1 =       1    requires 1 bit
//      2 =      10    requires 2 bits
//      3 =      11    requires 2 bits
//      4 =     100    requires 3 bits
//      7 =     111    requires 3 bits
//      8 =    1000    requires 4 bits
//     15 =    1111    requires 4 bits
//     16 =   10000    requires 5 bits
//
// In general, whenever we reach a power of 2, one
// additional bit is required.
//
// The integer 0 is a special case. The binary
// representation of 0 is simply
//
//     0
//
// so we say that one bit is required.

int number_of_bits( int n ) {
    if ( n == 0 ) {
        return 1;
    }

    int count{ 0 };

    while ( n != 0 ) {
        n /= 2;
        ++count;
    }

    return count;
}

// std::string to_binary( ... )
//
// @param n    a non-negative integer
//
// @returns    a string containing the binary
//             representation of n
//
// Explaining every detail of this function requires
// features that we have not yet covered. For now, we
// will use it as an example of how library functions
// can perform useful operations for us.
//
// First,
//
//     std::bitset<32>( n )
//
// creates an object containing 32 bits representing n.
//
// For example, if n is 42, this represents
//
//     00000000000000000000000000101010
//
// Next,
//
//     .to_string()
//
// creates a string containing those 32 characters.
//
// We do not want to print all of the leading zeros.
// We know from number_of_bits(n) how many characters
// at the end of the string are significant.
//
// For 42, there are six:
//
//     00000000000000000000000000 101010
//     -------------------------- ------
//          leading zeros         6 bits
//
// Therefore, we want the last
//
//     number_of_bits(n)
//
// characters of the string.
//
// If there are 32 characters in total and we want
// the final six, we start at position
//
//     32 - 6 = 26.
//
// The member function
//
//     .substr( position )
//
// returns the part of a string beginning at that
// position and continuing to the end.
//
// Thus, for 42,
//
//     .substr( 32 - number_of_bits(42) )
//
// extracts
//
//     "101010".
//
// Notice that we do not need to specify how many
// characters to extract. With only one argument,
// substr(...) automatically continues to the end
// of the string.

std::string to_binary( int n ) {
    return std::bitset<32>( n )
        .to_string()
        .substr( 32 - number_of_bits( n ) );
}