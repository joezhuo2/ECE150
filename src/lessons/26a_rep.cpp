#include <cassert>
#include <bitset>
#include <iostream>
#include <limits>

/***************************************************
 * Binary and hexadecimal representations of integers
 *
 * An integer stored by a computer is ultimately
 * represented by a sequence of bits: zeros and ones.
 *
 * For example, suppose that we had an 8-bit unsigned
 * integer containing the value 42. Its bits would be
 *
 *     00101010
 *
 * We can interpret and display this same value using
 * different number systems:
 *
 *     decimal:       42
 *     hexadecimal:  2a
 *     binary:        00101010
 *
 * These are not three different values. They are
 * three different representations of the same value.
 *
 *
 * HEXADECIMAL AND BINARY
 *
 * Hexadecimal is particularly convenient when looking
 * at binary data because each hexadecimal digit
 * corresponds to exactly four bits:
 *
 *     binary    hexadecimal
 *
 *     0000           0
 *     0001           1
 *     0010           2
 *     0011           3
 *     0100           4
 *     0101           5
 *     0110           6
 *     0111           7
 *     1000           8
 *     1001           9
 *     1010           a
 *     1011           b
 *     1100           c
 *     1101           d
 *     1110           e
 *     1111           f
 *
 * Thus,
 *
 *     binary:       0010 1010
 *     hexadecimal:    2    a
 *
 * and both represent the decimal value 42.
 *
 *
 * INTEGER SIZES
 *
 * On the system for which this example is intended,
 * we expect
 *
 *     short       16 bits
 *     int         32 bits
 *     long        64 bits
 *     long long   64 bits
 *
 * C++ does not require these exact sizes on every
 * computer and operating system. Consequently, the
 * assertions below verify that the program is being
 * run on a system with the sizes expected by this
 * example.
 *
 * If one of these assertions fails, the assumptions
 * made by this example do not match that system.
 *
 *
 * SIGNED AND UNSIGNED INTEGERS
 *
 * An unsigned integer represents only non-negative
 * values. If an unsigned integer has n bits, its
 * values range from
 *
 *     0 through 2^n - 1.
 *
 * Thus, a 16-bit unsigned short can represent
 *
 *     0 through 65535.
 *
 * A signed integer must also represent negative
 * values. Modern C++ uses two's-complement
 * representation for signed integers.
 *
 * For example, with 16 bits:
 *
 *        0 = 0000000000000000
 *        1 = 0000000000000001
 *        2 = 0000000000000010
 *        3 = 0000000000000011
 *
 * while
 *
 *       -1 = 1111111111111111
 *       -2 = 1111111111111110
 *       -3 = 1111111111111101
 *
 * A 16-bit signed integer therefore ranges from
 *
 *     -32768 through 32767.
 *
 * Notice that the same sequence of bits can represent
 * different values depending on whether we interpret
 * those bits as signed or unsigned. For example,
 *
 *     1111111111111111
 *
 * represents
 *
 *        -1 as a signed 16-bit integer,
 *
 * but
 *
 *     65535 as an unsigned 16-bit integer.
 *
 *
 * PRINTING IN DIFFERENT BASES
 *
 * By default, std::cout prints integers in decimal.
 *
 * Sending
 *
 *     std::hex
 *
 * to std::cout causes subsequent integers to be
 * printed in hexadecimal.
 *
 * Sending
 *
 *     std::dec
 *
 * to std::cout causes subsequent integers to be
 * printed in decimal again.
 *
 * For example,
 *
 *     std::cout << std::hex << 42;
 *
 * prints
 *
 *     2a
 *
 * while
 *
 *     std::cout << std::dec << 42;
 *
 * prints
 *
 *     42
 *
 * The integer itself has not changed. Only the way
 * std::cout displays it has changed.
 *
 * We will use std::bitset to display the actual bit
 * pattern in binary. You do not need to understand
 * all the details of std::bitset yet. For now, read
 *
 *     std::bitset<16>( n )
 *
 * as
 *
 *     "display the value n using 16 bits."
 *
 * The examples below compare the hexadecimal,
 * decimal, and binary representations of several
 * signed and unsigned integer values.
 ***************************************************/

// Function declaration
int main();

// Function definition
int main() {
    // These assertions verify the sizes assumed by
    // this example. sizeof(...) returns the number
    // of bytes used to store an object of that type.
    //
    // On the systems used for this course, one byte
    // contains eight bits.

    assert( sizeof( short )     == 2 );
    assert( sizeof( int )       == 4 );
    assert( sizeof( long )      == 8 );
    assert( sizeof( long long ) == 8 );

    ///////////////////////////// SHORT //////////////////////////////////

    std::cout << "   >>>> SHORT <<<<" << std::endl
              << std::endl;

    short n_s{};

    // std::numeric_limits<short>::min() gives us the
    // smallest value that can be stored as a short.

    n_s = std::numeric_limits<short>::min();

    std::cout << "The minimum value of 'short':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_s << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_s << std::endl;
    std::cout << "    Binary:      " << std::bitset<16>( n_s )
              << std::endl << std::endl;

    // Now examine the bit patterns for -3, -2, and -1.
    //
    // Pay particular attention to the left-hand bits.
    // Negative numbers in two's-complement representation
    // have leading 1s.

    for ( n_s = -3; n_s <= -1; ++n_s ) {
        std::cout << "The storage of " << n_s
                  << " as 'short':" << std::endl;
        std::cout << "    Hexadecimal: " << std::hex << n_s << std::endl;
        std::cout << "    Decimal:     " << std::dec << n_s << std::endl;
        std::cout << "    Binary:      " << std::bitset<16>( n_s )
                  << std::endl << std::endl;
    }

    // std::numeric_limits<short>::max() gives us the
    // largest value that can be stored as a short.

    n_s = std::numeric_limits<short>::max();

    std::cout << "The maximum value of 'short':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_s << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_s << std::endl;
    std::cout << "    Binary:      " << std::bitset<16>( n_s )
              << std::endl << std::endl;

    // An unsigned short uses all 16 bits to represent
    // non-negative values. Consequently, its maximum
    // value is larger than the maximum signed short.

    unsigned short n_us{
        std::numeric_limits<unsigned short>::max()
    };

    std::cout << "The maximum value of 'unsigned short':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_us << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_us << std::endl;
    std::cout << "    Binary:      " << std::bitset<16>( n_us )
              << std::endl << std::endl << std::endl;


    ////////////////////////////// INT ///////////////////////////////////

    std::cout << "   >>>> INT <<<<" << std::endl
              << std::endl;

    int n_i{};

    n_i = std::numeric_limits<int>::min();

    std::cout << "The minimum value of 'int':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_i << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_i << std::endl;
    std::cout << "    Binary:      " << std::bitset<32>( n_i )
              << std::endl << std::endl;

    for ( n_i = -3; n_i <= -1; ++n_i ) {
        std::cout << "The storage of " << n_i
                  << " as 'int':" << std::endl;
        std::cout << "    Hexadecimal: " << std::hex << n_i << std::endl;
        std::cout << "    Decimal:     " << std::dec << n_i << std::endl;
        std::cout << "    Binary:      " << std::bitset<32>( n_i )
                  << std::endl << std::endl;
    }

    n_i = std::numeric_limits<int>::max();

    std::cout << "The maximum value of 'int':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_i << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_i << std::endl;
    std::cout << "    Binary:      " << std::bitset<32>( n_i )
              << std::endl << std::endl;

    unsigned int n_ui{
        std::numeric_limits<unsigned int>::max()
    };

    std::cout << "The maximum value of 'unsigned int':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_ui << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_ui << std::endl;
    std::cout << "    Binary:      " << std::bitset<32>( n_ui )
              << std::endl << std::endl << std::endl;


    ////////////////////////////// LONG //////////////////////////////////

    std::cout << "   >>>> LONG <<<<" << std::endl
              << std::endl;

    long n_l{};

    n_l = std::numeric_limits<long>::min();

    std::cout << "The minimum value of 'long':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_l << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_l << std::endl;
    std::cout << "    Binary:      "
              << std::bitset<8*sizeof( long )>( n_l )
              << std::endl << std::endl;

    for ( n_l = -3; n_l <= -1; ++n_l ) {
        std::cout << "The storage of " << n_l
                  << " as 'long':" << std::endl;
        std::cout << "    Hexadecimal: " << std::hex << n_l << std::endl;
        std::cout << "    Decimal:     " << std::dec << n_l << std::endl;
        std::cout << "    Binary:      "
                  << std::bitset<8*sizeof( long )>( n_l )
                  << std::endl << std::endl;
    }

    n_l = std::numeric_limits<long>::max();

    std::cout << "The maximum value of 'long':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_l << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_l << std::endl;
    std::cout << "    Binary:      "
              << std::bitset<8*sizeof( long )>( n_l )
              << std::endl << std::endl;

    unsigned long n_ul{
        std::numeric_limits<unsigned long>::max()
    };

    std::cout << "The maximum value of 'unsigned long':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_ul << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_ul << std::endl;
    std::cout << "    Binary:      "
              << std::bitset<8*sizeof( unsigned long )>( n_ul )
              << std::endl << std::endl << std::endl;


    /////////////////////////// LONG LONG /////////////////////////////////

    std::cout << "   >>>> LONG LONG <<<<" << std::endl
              << std::endl;

    long long n_ll{};

    n_ll = std::numeric_limits<long long>::min();

    std::cout << "The minimum value of 'long long':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_ll << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_ll << std::endl;
    std::cout << "    Binary:      "
              << std::bitset<8*sizeof( long long )>( n_ll )
              << std::endl << std::endl;

    for ( n_ll = -3; n_ll <= -1; ++n_ll ) {
        std::cout << "The storage of " << n_ll
                  << " as 'long long':" << std::endl;
        std::cout << "    Hexadecimal: " << std::hex << n_ll << std::endl;
        std::cout << "    Decimal:     " << std::dec << n_ll << std::endl;
        std::cout << "    Binary:      "
                  << std::bitset<8*sizeof( long long )>( n_ll )
                  << std::endl << std::endl;
    }

    n_ll = std::numeric_limits<long long>::max();

    std::cout << "The maximum value of 'long long':" << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_ll << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_ll << std::endl;
    std::cout << "    Binary:      "
              << std::bitset<8*sizeof( long long )>( n_ll )
              << std::endl << std::endl;

    unsigned long long n_ull{
        std::numeric_limits<unsigned long long>::max()
    };

    std::cout << "The maximum value of 'unsigned long long':"
              << std::endl;
    std::cout << "    Hexadecimal: " << std::hex << n_ull << std::endl;
    std::cout << "    Decimal:     " << std::dec << n_ull << std::endl;
    std::cout << "    Binary:      "
              << std::bitset<8*sizeof( unsigned long long )>( n_ull )
              << std::endl << std::endl;

    return 0;
}