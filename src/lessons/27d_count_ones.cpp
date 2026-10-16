#include <cstdint>
#include <iostream>

/***************************************************
 * Counting one bits
 *
 * Write a function that counts the number of 1 bits
 * in a 32-bit unsigned integer.
 *
 * For example, consider the 8-bit representations
 *
 *      5 = 00000101
 *     13 = 00001101
 *     15 = 00001111
 *
 * The number 5 contains two 1 bits, 13 contains
 * three, and 15 contains four.
 *
 * We have already seen how to construct a bit mask
 * that contains exactly one 1:
 *
 *     00000000000000000000000000000001
 *
 * If we repeatedly shift this mask one position to
 * the left, we obtain
 *
 *     00000000000000000000000000000001
 *     00000000000000000000000000000010
 *     00000000000000000000000000000100
 *     00000000000000000000000000001000
 *                         ...
 *     10000000000000000000000000000000
 *
 * We can AND each mask with n:
 *
 *     n & mask
 *
 * If the corresponding bit of n is 0, the result is
 * zero. If the corresponding bit is 1, the result is
 * nonzero.
 *
 * Therefore, we can examine each bit in turn and
 * increment a counter whenever
 *
 *     (n & mask) != 0.
 *
 *
 * AN INTERESTING LOOP
 *
 * The loop
 *
 *     for ( std::uint32_t mask{ 1 };
 *           mask != 0;
 *           mask <<= 1 )
 *
 * does not explicitly say that it should execute
 * 32 times.
 *
 * Instead, the 1 in the mask moves from bit 0
 * through bit 31. After the final shift, that 1 is
 * shifted out of the 32-bit unsigned integer:
 *
 *     10000000000000000000000000000000
 *
 * becomes
 *
 *     00000000000000000000000000000000.
 *
 * At this point, mask == 0 and the loop terminates.
 ***************************************************/

// Function declarations
int main();
unsigned int count_ones( std::uint32_t n );

// Function definitions
int main() {
    for ( std::uint32_t k{ 1 };
          k < 1000;
          k += 13 ) {
        std::cout << k << ": "
                  << count_ones( k )
                  << std::endl;
    }

    return 0;
}

/***************************************************
 * count_ones
 *
 * Returns the number of bits in n that are equal
 * to 1.
 ***************************************************/
unsigned int count_ones( std::uint32_t n ) {
    unsigned int count{ 0 };

    for ( std::uint32_t mask{ 1 };
          mask != 0;
          mask <<= 1 ) {
        if ( (n & mask) != 0 ) {
            ++count;
        }
    }

    return count;
}