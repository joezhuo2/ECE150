#include <bitset>
#include <cstdint>
#include <iostream>

/***************************************************
 * Bitwise operations
 *
 * An integer is stored as a sequence of bits. C++
 * provides operators that allow us to manipulate
 * these individual bits.
 *
 * The four basic bitwise operators are
 *
 *     |     bitwise OR
 *     &     bitwise AND
 *     ^     bitwise exclusive OR (XOR)
 *     ~     bitwise NOT (complement)
 *
 * These operators compare or modify corresponding
 * bits in an integer.
 *
 *
 * BITWISE OR
 *
 * The expression
 *
 *     m | n
 *
 * compares corresponding bits of m and n. A bit in
 * the result is 1 if either corresponding bit is 1.
 *
 *     m    n    m | n
 *     ----------------
 *     0    0      0
 *     0    1      1
 *     1    0      1
 *     1    1      1
 *
 * For example,
 *
 *       00101100
 *     | 01011010
 *       --------
 *       01111110
 *
 *
 * BITWISE AND
 *
 * The expression
 *
 *     m & n
 *
 * produces a 1 only when both corresponding bits
 * are 1.
 *
 *     m    n    m & n
 *     ----------------
 *     0    0      0
 *     0    1      0
 *     1    0      0
 *     1    1      1
 *
 * For example,
 *
 *       00101100
 *     & 01011010
 *       --------
 *       00001000
 *
 *
 * BITWISE EXCLUSIVE OR
 *
 * The expression
 *
 *     m ^ n
 *
 * produces a 1 when the corresponding bits are
 * different.
 *
 *     m    n    m ^ n
 *     ----------------
 *     0    0      0
 *     0    1      1
 *     1    0      1
 *     1    1      0
 *
 * For example,
 *
 *       00101100
 *     ^ 01011010
 *       --------
 *       01110110
 *
 * Notice that XOR differs from OR when both bits
 * are 1:
 *
 *     1 | 1 == 1
 *     1 ^ 1 == 0
 *
 *
 * BITWISE NOT
 *
 * The operator ~ requires only one operand.
 *
 * The expression
 *
 *     ~m
 *
 * reverses every bit:
 *
 *     0 becomes 1
 *     1 becomes 0
 *
 * For example, using eight bits,
 *
 *       m = 00101100
 *      ~m = 11010011
 *
 * This operation is also called the bitwise
 * complement.
 *
 *
 * BITWISE VERSUS LOGICAL OPERATORS
 *
 * Do not confuse the bitwise operators
 *
 *     &    |    ~
 *
 * with the logical operators
 *
 *     &&   ||   !
 *
 * Logical operators are normally used with Boolean
 * conditions:
 *
 *     (x > 0) && (x < 10)
 *
 * Bitwise operators operate on the individual bits
 * used to represent integer values:
 *
 *     m & n
 *
 * For example, consider
 *
 *     5 = 00000101
 *     3 = 00000011
 *
 * Then
 *
 *     5 & 3 = 00000001 = 1
 *
 * whereas
 *
 *     5 && 3
 *
 * treats both nonzero values as true, so the logical
 * result is true.
 *
 *
 * WHY USE std::uint32_t?
 *
 * In this example, we use
 *
 *     std::uint32_t
 *
 * rather than 'int'.
 *
 * The type std::uint32_t is an unsigned integer type
 * containing exactly 32 bits. This makes it especially
 * convenient when we want to study operations on
 * exactly 32 individual bits.
 *
 * We use
 *
 *     std::bitset<32>( n )
 *
 * to display those 32 bits.
 ***************************************************/

// Function declaration
int main();

// Function definition
int main() {
    std::uint32_t m{ 532543242 };
    std::uint32_t n{ 826732582 };

    while ( true ) {
        std::cout << "m = " << m << std::endl;
        std::cout << "n = " << n << std::endl
                  << std::endl;

        ////////////////////// BITWISE OR /////////////////////////////////

        std::cout << "Bitwise OR:" << std::endl;

        std::cout << "      "
                  << std::bitset<32>( m )
                  << std::endl;

        std::cout << "    | "
                  << std::bitset<32>( n )
                  << std::endl;

        std::cout << "      --------------------------------"
                  << std::endl;

        std::cout << "      "
                  << std::bitset<32>( m | n )
                  << std::endl << std::endl;


        ////////////////////// BITWISE AND ////////////////////////////////

        std::cout << "Bitwise AND:" << std::endl;

        std::cout << "      "
                  << std::bitset<32>( m )
                  << std::endl;

        std::cout << "    & "
                  << std::bitset<32>( n )
                  << std::endl;

        std::cout << "      --------------------------------"
                  << std::endl;

        std::cout << "      "
                  << std::bitset<32>( m & n )
                  << std::endl << std::endl;


        ////////////////////// BITWISE XOR ////////////////////////////////

        std::cout << "Bitwise XOR:" << std::endl;

        std::cout << "      "
                  << std::bitset<32>( m )
                  << std::endl;

        std::cout << "    ^ "
                  << std::bitset<32>( n )
                  << std::endl;

        std::cout << "      --------------------------------"
                  << std::endl;

        std::cout << "      "
                  << std::bitset<32>( m ^ n )
                  << std::endl << std::endl;


        ////////////////////// BITWISE NOT ////////////////////////////////

        std::cout << "Bitwise NOT (complement):"
                  << std::endl;

        std::cout << "     m = "
                  << std::bitset<32>( m )
                  << std::endl;

        std::cout << "    ~m = "
                  << std::bitset<32>( ~m )
                  << std::endl << std::endl;


        ////////////////////////// INPUT //////////////////////////////////

        std::cout << "Enter two non-negative integers "
                  << "'m' and 'n' (both 0 to quit):"
                  << std::endl;

        std::cout << "Enter 'm': ";
        std::cin  >> m;

        std::cout << "Enter 'n': ";
        std::cin  >> n;

        if ( (m == 0) && (n == 0) ) {
            break;
        }

        std::cout << std::endl;
    }

    return 0;
}