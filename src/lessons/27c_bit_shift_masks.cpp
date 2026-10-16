#include <cassert>
#include <bitset>
#include <cstdint>
#include <iostream>
#include <string>

/***************************************************
 * Bit shifting and bit masks
 *
 * In the previous example, we introduced the bitwise
 * operators
 *
 *     |     bitwise OR
 *     &     bitwise AND
 *     ^     bitwise XOR
 *     ~     bitwise NOT
 *
 * We can use these operators together with the shift
 * operators
 *
 *     <<    shift left
 *     >>    shift right
 *
 * to manipulate individual bits within an integer.
 *
 *
 * BIT POSITIONS
 *
 * We number the bits of a 32-bit integer beginning
 * with bit 0 on the right:
 *
 *      bit 31                         bit 0
 *         |                              |
 *         v                              v
 *         00000000000000000000000000000000
 *
 * Thus, the rightmost bit is bit 0, the next bit is
 * bit 1, and the leftmost bit is bit 31.
 *
 * Bit b has the place value
 *
 *     2^b.
 *
 * For example,
 *
 *     bit 0 has value 1
 *     bit 1 has value 2
 *     bit 2 has value 4
 *     bit 3 has value 8
 *
 * and so on.
 *
 *
 * LEFT SHIFTING
 *
 * Consider the 32-bit unsigned integer
 *
 *     00000000000000000000000000000001
 *
 * which represents the value 1.
 *
 * The expression
 *
 *     std::uint32_t{ 1 } << 1
 *
 * shifts all the bits one position to the left:
 *
 *     00000000000000000000000000000010
 *
 * This represents 2.
 *
 * Shifting two positions gives
 *
 *     std::uint32_t{ 1 } << 2
 *
 *     00000000000000000000000000000100
 *
 * which represents 4.
 *
 * In general,
 *
 *     std::uint32_t{ 1 } << b
 *
 * produces a 32-bit integer in which bit b is 1 and
 * every other bit is 0.
 *
 * Such a value is called a bit mask.
 *
 * For example, if b == 5, the mask is
 *
 *     00000000000000000000000000100000
 *                               ^
 *                             bit 5
 *
 *
 * MANIPULATING ONE BIT
 *
 * Once we have a mask containing a 1 in bit b, we
 * can use the bitwise operators to manipulate that
 * bit in another integer.
 *
 *
 * SETTING A BIT TO 1
 *
 * To set bit b to 1, use bitwise OR:
 *
 *     m |= mask;
 *
 * Since
 *
 *     0 | 1 == 1
 *     1 | 1 == 1
 *
 * bit b becomes 1 regardless of its previous value.
 *
 * Every other bit in the mask is 0, and
 *
 *     0 | 0 == 0
 *     1 | 0 == 1
 *
 * so all the other bits of m remain unchanged.
 *
 *
 * CLEARING A BIT TO 0
 *
 * To clear bit b, first complement the mask:
 *
 *     ~mask
 *
 * If the mask is
 *
 *     00000000000000000000000000100000
 *
 * its complement is
 *
 *     11111111111111111111111111011111
 *
 * We can then use bitwise AND:
 *
 *     m &= ~mask;
 *
 * At bit b,
 *
 *     0 & 0 == 0
 *     1 & 0 == 0
 *
 * so the bit becomes 0.
 *
 * All the other mask bits are 1, and AND with 1
 * leaves those bits unchanged.
 *
 *
 * TOGGLING A BIT
 *
 * To toggle, or flip, bit b, use XOR:
 *
 *     m ^= mask;
 *
 * Since
 *
 *     0 ^ 1 == 1
 *     1 ^ 1 == 0
 *
 * bit b changes from 0 to 1 or from 1 to 0.
 *
 * The other bits remain unchanged because
 *
 *     0 ^ 0 == 0
 *     1 ^ 0 == 1.
 *
 *
 * EXTRACTING A BIT
 *
 * We can determine whether bit b is 0 or 1 by first
 * using AND:
 *
 *     m & mask
 *
 * This clears every bit except possibly bit b.
 *
 * For example, if bit 5 is set, we may obtain
 *
 *     00000000000000000000000000100000
 *
 * This has the value 32, not 1.
 *
 * We can shift this result b positions to the right:
 *
 *     (m & mask) >> b
 *
 * so that bit b moves to bit 0:
 *
 *     00000000000000000000000000000001
 *
 * The result is therefore either 0 or 1.
 *
 *
 * WHY USE AN UNSIGNED INTEGER?
 *
 * We use std::uint32_t so that we know that the
 * integer contains exactly 32 bits and that all 32
 * bits are ordinary value bits.
 *
 * In particular,
 *
 *     std::uint32_t{ 1 } << 31
 *
 * is well-defined and produces
 *
 *     10000000000000000000000000000000.
 *
 * Using unsigned integers also avoids introducing
 * additional complications associated with shifting
 * signed integers.
 ***************************************************/

// Function declaration
int main();

// Function definition
int main() {
    std::uint32_t m{ 532543242 };
    bool quit{ false };

    std::cout << "The initial value is"
              << std::endl;

    std::cout << "    "
              << std::bitset<32>( m )
              << std::endl << std::endl;

    while ( true ) {
        int b{};

        while ( true ) {
            std::cout << "Which bit should be changed or extracted "
                      << "(0-31, 32 to quit)? ";
            std::cin  >> b;

            if ( b == 32 ) {
                quit = true;
                break;
            } else if ( (b >= 0) && (b <= 31) ) {
                break;
            }
        }

        if ( quit ) {
            break;
        }

        // Construct a mask having a 1 in bit b and
        // zeros everywhere else.

        std::uint32_t mask{
            std::uint32_t{ 1 } << b
        };

        std::cout << std::endl;

        std::cout << "    "
                  << std::bitset<32>( m )
                  << std::endl;

        std::cout << std::string( 36 - b, ' ' )
                  << "^ bit " << b
                  << std::endl << std::endl;

        int action{};

        while ( true ) {
            std::cout << "Clear (0), set (1), toggle (2), "
                      << "or extract (3)? ";
            std::cin  >> action;

            if ( (action >= 0) && (action <= 3) ) {
                break;
            }
        }

        std::cout << std::endl;

        if ( action == 0 ) {
            ////////////////////// CLEAR /////////////////////////////////

            // Complementing the mask produces a value
            // containing a 0 in bit b and 1s everywhere
            // else. ANDing with this value clears bit b.

            std::uint32_t clear_mask{ ~mask };

            std::cout << "Clear bit " << b << ":"
                      << std::endl;

            std::cout << "    "
                      << std::bitset<32>( m )
                      << std::endl;

            std::cout << "  & "
                      << std::bitset<32>( clear_mask )
                      << std::endl;

            std::cout << "    --------------------------------"
                      << std::endl;

            m &= clear_mask;

            std::cout << "    "
                      << std::bitset<32>( m )
                      << std::endl;

            std::cout << std::string( 36 - b, ' ' )
                      << "^"
                      << std::endl;
        } else if ( action == 1 ) {
            /////////////////////// SET /////////////////////////////////

            // The mask contains a 1 in bit b. ORing
            // with the mask sets bit b to 1.

            std::cout << "Set bit " << b << ":"
                      << std::endl;

            std::cout << "    "
                      << std::bitset<32>( m )
                      << std::endl;

            std::cout << "  | "
                      << std::bitset<32>( mask )
                      << std::endl;

            std::cout << "    --------------------------------"
                      << std::endl;

            m |= mask;

            std::cout << "    "
                      << std::bitset<32>( m )
                      << std::endl;

            std::cout << std::string( 36 - b, ' ' )
                      << "^"
                      << std::endl;
        } else if ( action == 2 ) {
            ///////////////////// TOGGLE ////////////////////////////////

            // XORing with a 1 changes bit b from 0
            // to 1 or from 1 to 0.

            std::cout << "Toggle bit " << b << ":"
                      << std::endl;

            std::cout << "    "
                      << std::bitset<32>( m )
                      << std::endl;

            std::cout << "  ^ "
                      << std::bitset<32>( mask )
                      << std::endl;

            std::cout << "    --------------------------------"
                      << std::endl;

            m ^= mask;

            std::cout << "    "
                      << std::bitset<32>( m )
                      << std::endl;

            std::cout << std::string( 36 - b, ' ' )
                      << "^"
                      << std::endl;
        } else {
            ///////////////////// EXTRACT ///////////////////////////////

            assert( action == 3 );

            // ANDing with the mask clears every bit
            // except possibly bit b.

            std::uint32_t masked_value{ m & mask };

            // Shifting right by b positions moves bit b
            // into bit 0. The result is therefore either
            // 0 or 1.

            std::uint32_t bit_value{
                masked_value >> b
            };

            std::cout << "Extract bit " << b << ":"
                      << std::endl;

            std::cout << "    "
                      << std::bitset<32>( m )
                      << std::endl;

            std::cout << "  & "
                      << std::bitset<32>( mask )
                      << std::endl;

            std::cout << "    --------------------------------"
                      << std::endl;

            std::cout << "    "
                      << std::bitset<32>( masked_value )
                      << std::endl;

            std::cout << std::string( 36 - b, ' ' )
                      << "^"
                      << std::endl << std::endl;

            std::cout << "Shift this result "
                      << b
                      << " position(s) to the right:"
                      << std::endl;

            std::cout << "    "
                      << std::bitset<32>( masked_value )
                      << " >> " << b
                      << std::endl;

            std::cout << "    "
                      << std::bitset<32>( bit_value )
                      << std::endl << std::endl;

            std::cout << "Bit "
                      << b
                      << " is "
                      << bit_value
                      << "."
                      << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}