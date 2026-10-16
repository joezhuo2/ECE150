#include <bitset>
#include <cstdint>
#include <iostream>

/***************************************************
 * Bit shifting
 *
 * C++ provides two operators that shift the bits of
 * an integer:
 *
 *     <<    shift left
 *     >>    shift right
 *
 * For example, consider the 8-bit representation
 *
 *     00101101
 *
 * Shifting this value one position to the left gives
 *
 *     01011010
 *
 * while shifting it one position to the right gives
 *
 *     00010110
 *
 * Bits that are shifted beyond the end of the integer
 * are discarded.
 *
 *
 * LEFT SHIFTING
 *
 * The expression
 *
 *     m << n
 *
 * shifts all the bits in m by n positions to the
 * left. Zeros are inserted on the right.
 *
 * For example,
 *
 *     00000000000000000000000000000101
 *
 * shifted three positions to the left becomes
 *
 *     00000000000000000000000000101000.
 *
 * Thus,
 *
 *     5 << 3 == 40.
 *
 * Provided no significant bits are discarded, shifting
 * an unsigned integer n positions to the left has the
 * same effect as multiplying by 2^n.
 *
 * Thus,
 *
 *     m << n
 *
 * corresponds to
 *
 *     m * 2^n
 *
 * when the result can be represented without losing
 * significant bits.
 *
 * If bits are shifted beyond the left end of an
 * unsigned integer, those bits are discarded.
 *
 *
 * RIGHT SHIFTING
 *
 * The expression
 *
 *     m >> n
 *
 * shifts all the bits in m by n positions to the
 * right. For an unsigned integer, zeros are inserted
 * on the left.
 *
 * For example,
 *
 *     00000000000000000000000000101000
 *
 * shifted three positions to the right becomes
 *
 *     00000000000000000000000000000101.
 *
 * Thus,
 *
 *     40 >> 3 == 5.
 *
 * Shifting an unsigned integer n positions to the
 * right has the same effect as integer division by
 * 2^n:
 *
 *     m >> n
 *
 * corresponds to
 *
 *     m / 2^n.
 *
 * Any bits shifted beyond the right end are discarded.
 *
 * For example,
 *
 *     11 = 00000000000000000000000000001011
 *
 * and therefore
 *
 *     11 >> 1
 *
 * gives
 *
 *      5 = 00000000000000000000000000000101.
 *
 * This agrees with integer division:
 *
 *     11 / 2 == 5.
 *
 *
 * SHIFTING BY ZERO
 *
 * Shifting by zero positions does nothing:
 *
 *     m << 0 == m
 *     m >> 0 == m.
 *
 *
 * VALID SHIFT COUNTS
 *
 * The value on the right of a shift operator must be
 * non-negative and strictly less than the number of
 * bits in the value being shifted.
 *
 * Since this program uses std::uint32_t, the valid
 * shift counts are
 *
 *     0 through 31.
 *
 * In particular, shifting a 32-bit integer by 32
 * positions is not valid.
 *
 *
 * WHY USE std::uint32_t?
 *
 * In this example, we want to study exactly 32 bits.
 * The type
 *
 *     std::uint32_t
 *
 * is an unsigned integer type having exactly 32 bits.
 *
 * Using an unsigned type also makes right shifting
 * particularly simple: zeros are always shifted in
 * from the left.
 ***************************************************/

// Function declaration
int main();

// Function definition
int main() {
    std::uint32_t m{ 532543242 };
    int n{ 5 };

    while ( true ) {
        std::cout << "Shift left and shift right:"
                  << std::endl;

        std::cout << "     m == "
                  << std::bitset<32>( m )
                  << std::endl;

        std::cout << "m << " << n << " == "
                  << std::bitset<32>( m << n )
                  << std::endl;

        std::cout << "m >> " << n << " == "
                  << std::bitset<32>( m >> n )
                  << std::endl;

        std::cout << std::endl;

        std::cout << "In decimal:"
                  << std::endl;

        std::cout << "     m == "
                  << m
                  << std::endl;

        std::cout << "m << " << n << " == "
                  << (m << n)
                  << std::endl;

        std::cout << "m >> " << n << " == "
                  << (m >> n)
                  << std::endl;

        std::cout << std::endl;

        std::cout << "Enter an integer 'm' and a shift 'n' "
                  << "(both 0 to quit):"
                  << std::endl;

        std::cout << "Enter 'm': ";
        std::cin  >> m;

        while ( true ) {
            std::cout << "Enter 'n' (between 0 and 31): ";
            std::cin  >> n;

            if ( (n >= 0) && (n <= 31) ) {
                break;
            }
        }

        if ( (m == 0) && (n == 0) ) {
            break;
        }

        std::cout << std::endl;
    }

    return 0;
}