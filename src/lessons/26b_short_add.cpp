#include <bitset>
#include <iostream>
#include <limits>

/***************************************************
 * Adding two short integers
 *
 * On the computers used for this course, a 'short'
 * is stored using 16 bits.
 *
 * A signed 16-bit integer can represent the values
 *
 *     -32768 through 32767.
 *
 * In the previous example, we saw that these values
 * are stored using two's-complement representation.
 *
 * In this example, we will examine what happens when
 * two values of type 'short' are added.
 *
 *
 * ADDING BINARY NUMBERS
 *
 * Binary addition works in much the same way as
 * decimal addition. We add corresponding digits,
 * beginning at the right.
 *
 * The basic rules are
 *
 *       0 + 0 =  0
 *       0 + 1 =  1
 *       1 + 0 =  1
 *       1 + 1 = 10
 *
 * The last case means that we write 0 and carry 1
 * into the next column.
 *
 * For example,
 *
 *          0000000000000101     5
 *        + 0000000000000011   + 3
 *          ----------------
 *          0000000000001000     8
 *
 *
 * INTEGER PROMOTION
 *
 * There is an important detail in C++ that may at
 * first seem surprising.
 *
 * Suppose that
 *
 *     short m{ ... };
 *     short n{ ... };
 *
 * When C++ evaluates
 *
 *     m + n
 *
 * the two values are normally first converted to
 * type 'int'. This is called integer promotion.
 *
 * Thus, on our computers, the addition itself is
 * performed using a 32-bit 'int', not a 16-bit
 * 'short'.
 *
 * For example,
 *
 *     30000 + 10000 = 40000
 *
 * can be represented by an 'int', even though 40000
 * cannot be represented by a 16-bit 'short'.
 *
 * To investigate what happens when the result is
 * stored using only 16 bits, we will explicitly
 * convert the result back to a 'short':
 *
 *     short sum{ static_cast<short>( m + n ) };
 *
 * We will then display the 16 bits used to represent
 * m, n, and sum.
 *
 *
 * TRY VALUES SUCH AS
 *
 *         5 and      3
 *        -5 and      3
 *        -5 and     -3
 *     30000 and   2000
 *     30000 and  10000
 *    -30000 and  -2000
 *    -30000 and -10000
 *
 * Pay particular attention to examples where the
 * mathematical sum lies outside the range
 *
 *     -32768 through 32767.
 ***************************************************/

int main() {
    std::cout << "Enter both numbers as 0 to quit."
              << std::endl << std::endl;

    while ( true ) {
        short m{};
        short n{};

        std::cout << "Enter a first number:  ";
        std::cin  >> m;

        std::cout << "Enter a second number: ";
        std::cin  >> n;

        if ( (m == 0) && (n == 0) ) {
            break;
        }

        // Although m and n are both of type 'short',
        // the expression m + n has type 'int' because
        // of integer promotion.

        int int_sum{ m + n };

        // Explicitly convert the result back to a short
        // so that we can examine the resulting 16 bits.

        short short_sum{ static_cast<short>( int_sum ) };

        std::cout << std::endl;

        std::cout << "m = " << m << " = "
                  << std::bitset<16>( m )
                  << std::endl;

        std::cout << "n = " << n << " = "
                  << std::bitset<16>( n )
                  << std::endl;

        std::cout << std::endl;

        std::cout << "The sum calculated as an 'int':"
                  << std::endl;

        std::cout << "m + n = " << int_sum
                  << std::endl << std::endl;

        std::cout << "The sum stored as a 'short':"
                  << std::endl;

        std::cout << "sum = " << short_sum << " = "
                  << std::bitset<16>( short_sum )
                  << std::endl << std::endl;

        std::cout << "    "
                  << std::bitset<16>( m )
                  << std::endl;

        std::cout << "  + "
                  << std::bitset<16>( n )
                  << std::endl;

        std::cout << "    ----------------"
                  << std::endl;

        std::cout << "    "
                  << std::bitset<16>( short_sum )
                  << std::endl << std::endl;

        std::cout << "The range of 'short' is "
                  << std::numeric_limits<short>::min()
                  << " through "
                  << std::numeric_limits<short>::max()
                  << "."
                  << std::endl << std::endl;
    }

    return 0;
}