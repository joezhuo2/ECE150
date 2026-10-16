#include <cassert>
#include <iostream>

// Function declarations
int main();
int factorial( int n );

// Function definitions
int main() {
    std::cout << "Starting testing" << std::endl;

    for ( int k{ 0 }; k <= 12; ++k ) {
        std::cout << k << "! = "
                  << factorial( k ) << std::endl;
    }

    // Uncommenting either of these should cause an
    // assertion failure because the argument does not
    // satisfy
    //
    //     0 <= n <= 12.
    //
    // The exact assertion diagnostic is
    // implementation-dependent.

    // factorial( -1 );
    // factorial( 13 );

    std::cout << "Finished testing" << std::endl;

    return 0;
}

// int factorial( ... )
//
// @author    Douglas Wilhelm Harder
// @date      2020-09-09
// @version   1.0
//
// @param n    an integer between 0 and 12, inclusive
//
// @returns    n!
//
// @algorithm
// Calculate the product
//
//     1 x 2 x 3 x ... x (n - 1) x n.
//
// Because the result is initialized to 1 and the loop
// starts at 2, if n is either 0 or 1, the loop executes
// zero times and the function correctly returns
//
//     0! = 1! = 1.
//
// The restriction n <= 12 is necessary because 13!
// cannot be represented by a typical 32-bit int.

int factorial( int n ) {
    assert( (n >= 0) && (n <= 12) );

    int result{ 1 };

    for ( int k{ 2 }; k <= n; ++k ) {
        result *= k;
    }

    return result;
}