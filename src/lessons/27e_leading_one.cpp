#include <bitset>
#include <cstdint>
#include <iostream>

/***************************************************
 * Finding the most significant one bit
 *
 * Write a function that finds the most significant
 * 1 bit in a 32-bit unsigned integer.
 *
 * The most significant 1 bit is the leftmost bit
 * that is equal to 1.
 *
 * For example, suppose the binary representation of
 * n is
 *
 *     00000000000000000000001010011110
 *
 * The most significant 1 bit is
 *
 *     00000000000000000000001000000000
 *                           ^
 *
 * The function should therefore return the integer
 * having exactly this bit set:
 *
 *     00000000000000000000001000000000.
 *
 *
 * USING A BIT MASK
 *
 * As in the previous exercise, we can begin with the
 * mask
 *
 *     00000000000000000000000000000001
 *
 * and repeatedly shift the 1 one position to the
 * left:
 *
 *     00000000000000000000000000000001
 *     00000000000000000000000000000010
 *     00000000000000000000000000000100
 *     00000000000000000000000000001000
 *                         ...
 *
 * At each position, we can determine whether the
 * corresponding bit of n is 1 using
 *
 *     (n & mask) != 0.
 *
 * Whenever we find a 1 bit, we save the current
 * mask. Since the masks move from right to left,
 * each newly discovered 1 bit is more significant
 * than any previously discovered 1 bit.
 *
 * When the loop finishes, the last mask that was
 * saved therefore identifies the most significant
 * 1 bit.
 *
 *
 * STOPPING EARLY
 *
 * We do not need to examine masks that are larger
 * than n.
 *
 * For example, if
 *
 *     n == 100,
 *
 * there cannot be a 1 bit having a place value
 * greater than 100.
 *
 * Consequently, the loop continues only while
 *
 *     mask <= n.
 *
 *
 * WHAT DOES THE FUNCTION RETURN?
 *
 * The function returns an integer having exactly
 * one bit equal to 1.
 *
 * For example,
 *
 *     most_significant_one( 13 )
 *
 * examines
 *
 *     13 = 00000000000000000000000000001101
 *
 * and returns
 *
 *      8 = 00000000000000000000000000001000.
 *
 * Thus, for n > 0, the result is the largest power
 * of 2 that is less than or equal to n.
 *
 * If n == 0, there is no 1 bit, so the function
 * returns 0.
 ***************************************************/

// Function declarations
int main();
std::uint32_t most_significant_one( std::uint32_t n );

// Function definitions
int main() {
    for ( std::uint32_t k{ 1 };
          k < 1100;
          k += 13 ) {
        std::uint32_t result{
            most_significant_one( k )
        };

        std::cout << "n      = "
                  << std::bitset<32>( k )
                  << " = " << k
                  << std::endl;

        std::cout << "result = "
                  << std::bitset<32>( result )
                  << " = " << result
                  << std::endl << std::endl;
    }

    return 0;
}

/***************************************************
 * most_significant_one
 *
 * Returns an integer having only the most
 * significant 1 bit of n set to 1.
 *
 * If n == 0, the function returns 0.
 ***************************************************/
std::uint32_t most_significant_one( std::uint32_t n ) {
    std::uint32_t result{ 0 };

    for ( std::uint32_t mask{ 1 };
          (mask != 0) && (mask <= n);
          mask <<= 1 ) {
        if ( (n & mask) != 0 ) {
            result = mask;
        }
    }

    return result;
}