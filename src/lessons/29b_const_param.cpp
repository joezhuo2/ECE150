#include <iostream>

/***************************************************
 * Constant parameters
 *
 * A parameter passed by value is a local variable
 * in the function.
 *
 * For example, in
 *
 *     bool is_perfect_square( int const n )
 *
 * the function receives a copy of the argument.
 * Declaring n to be const prevents the function
 * from accidentally changing this local copy.
 *
 * This does not affect the argument in the calling
 * function. The const applies only to the parameter
 * n inside is_perfect_square().
 *
 * The purpose of const here is therefore to help
 * the programmer and the compiler catch accidental
 * assignments to variables that should not change.
 *
 * The Rust programming language takes this idea
 * further: local variables are immutable by default
 * unless the programmer explicitly declares them
 * to be mutable.
 ***************************************************/

// Function declarations
int main();
bool is_perfect_square( int const n );
bool is_perfect_square_no_multiplication( int const n );

// Function definitions
int main() {
    for ( int k{ 1 }; k <= 100; ++k ) {
        if ( is_perfect_square( k ) ) {
            std::cout << k << std::endl;
        }
    }

    std::cout << std::endl;

    for ( int k{ 1 }; k <= 100; ++k ) {
        if ( is_perfect_square_no_multiplication( k ) ) {
            std::cout << k << std::endl;
        }
    }

    return 0;
}

/***************************************************
 * is_perfect_square
 *
 * Determine whether n is a perfect square.
 *
 * Notice that n is declared const because there is
 * no reason for this function to change its value.
 ***************************************************/
bool is_perfect_square( int const n ) {
    for ( int i{ 1 }; i*i <= n; ++i ) {
        // What would happen if you accidentally
        // replaced the following condition with
        //
        //     if ( n = i*i ) {
        //
        // if n had not been declared const?
        //
        // With const, the compiler catches the
        // accidental assignment.

        if ( n == i*i ) {
            return true;
        }
    }

    return false;
}

/***************************************************
 * is_perfect_square_no_multiplication
 *
 * Determine whether n is a perfect square without
 * using multiplication.
 *
 * Recall that consecutive perfect squares differ
 * by consecutive odd numbers:
 *
 *      1 = 1
 *      4 = 1 + 3
 *      9 = 1 + 3 + 5
 *     16 = 1 + 3 + 5 + 7
 *
 * Thus, m successively takes on the values
 *
 *     1, 4, 9, 16, 25, ...
 *
 * without requiring multiplication.
 ***************************************************/
bool is_perfect_square_no_multiplication( int const n ) {
    // What would happen if you accidentally replaced
    //
    //     m += i
    //
    // with
    //
    //     n += i
    //
    // if n had not been declared const?
    //
    // Again, const allows the compiler to catch the
    // mistake.

    // This initializes both i and m to 1.
    //
    // At the end of each iteration:
    //   - i is incremented by 2;
    //   - m is then incremented by the new value
    //     of i.
    //
    // Consequently, m takes on the values
    //
    //     1, 4, 9, 16, 25, ...
    //
    for ( int i{ 1 }, m{ 1 };
          m <= n;
          i += 2, m += i ) {
        if ( n == m ) {
            return true;
        }
    }

    return false;
}