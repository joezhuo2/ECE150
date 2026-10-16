#include <bitset>
#include <iostream>
#include <limits>

/***************************************************
 * Multiplying two short integers
 *
 * On the computers used for this course, a 'short'
 * is stored using 16 bits.
 *
 * A signed 16-bit integer can represent the values
 *
 *     -32768 through 32767.
 *
 * In this example, we will examine what happens when
 * two values of type 'short' are multiplied.
 *
 *
 * MULTIPLYING BINARY NUMBERS
 *
 * Binary multiplication follows the same basic idea
 * as decimal multiplication, but each binary digit
 * can only be 0 or 1.
 *
 * Multiplying by 0 gives 0, while multiplying by 1
 * leaves the other value unchanged:
 *
 *     0*0 = 0
 *     0*1 = 0
 *     1*0 = 0
 *     1*1 = 1
 *
 * For example,
 *
 *     5 = 101
 *     3 =  11
 *
 * and
 *
 *           101
 *         *  11
 *         -----
 *           101
 *          101
 *         -----
 *          1111
 *
 * Thus,
 *
 *     101 * 11 = 1111
 *
 * or, in decimal,
 *
 *       5 * 3 = 15.
 *
 *
 * INTEGER PROMOTION
 *
 * There is an important detail in C++.
 *
 * Suppose that
 *
 *     short m{ ... };
 *     short n{ ... };
 *
 * Although both variables have type 'short', C++
 * normally converts both values to type 'int' before
 * evaluating
 *
 *     m*n
 *
 * This is called integer promotion.
 *
 * Consequently, on our computers, the multiplication
 * is performed using a 32-bit 'int'.
 *
 * For example,
 *
 *     200*200 = 40000
 *
 * can be represented by an 'int', even though 40000
 * cannot be represented by a 16-bit signed 'short'.
 *
 * To investigate what happens when the product is
 * stored using only 16 bits, we will explicitly
 * convert the product back to a 'short':
 *
 *     short product{
 *         static_cast<short>( m*n )
 *     };
 *
 *
 * WHY MULTIPLICATION IS INTERESTING
 *
 * Addition can exceed the range of 'short', but the
 * operands usually have to be fairly large.
 *
 * Multiplication can exceed the range much more
 * quickly. For example,
 *
 *     100*100 = 10000
 *
 * fits in a 'short', while
 *
 *     200*200 = 40000
 *
 * does not.
 *
 * Similarly,
 *
 *     (-200)*200 = -40000
 *
 * is smaller than the minimum value that can be
 * represented by a 16-bit signed 'short'.
 *
 *
 * TRY VALUES SUCH AS
 *
 *        5 and     3
 *       -5 and     3
 *       -5 and    -3
 *      100 and   100
 *      181 and   181
 *      182 and   182
 *      200 and   200
 *     -200 and   200
 *     -200 and  -200
 *
 * Notice in particular that
 *
 *     181*181 = 32761
 *
 * can be represented by a 'short', whereas
 *
 *     182*182 = 33124
 *
 * cannot.
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
        // the expression m*n has type 'int' because
        // of integer promotion.

        int int_product{ m*n };

        // Explicitly convert the product back to a
        // short so that we can examine the resulting
        // 16 bits.

        short short_product{
            static_cast<short>( int_product )
        };

        std::cout << std::endl;

        std::cout << "m = " << m << " = "
                  << std::bitset<16>( m )
                  << std::endl;

        std::cout << "n = " << n << " = "
                  << std::bitset<16>( n )
                  << std::endl;

        std::cout << std::endl;

        std::cout << "The product calculated as an 'int':"
                  << std::endl;

        std::cout << "m*n = " << int_product
                  << std::endl << std::endl;

        std::cout << "The product stored as a 'short':"
                  << std::endl;

        std::cout << "product = " << short_product << " = "
                  << std::bitset<16>( short_product )
                  << std::endl << std::endl;

        // Place the bit patterns underneath one another
        // so that they are easy to compare. This is not
        // intended to show all the intermediate steps
        // used in binary multiplication.

        std::cout << "    "
                  << std::bitset<16>( m )
                  << std::endl;

        std::cout << "  * "
                  << std::bitset<16>( n )
                  << std::endl;

        std::cout << "    ----------------"
                  << std::endl;

        std::cout << "    "
                  << std::bitset<16>( short_product )
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