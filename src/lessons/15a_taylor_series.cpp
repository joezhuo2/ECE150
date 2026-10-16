// 1-15-Cplusplus.cpp

#include <iostream>
#include <cmath>
#include <limits>

// Function declarations
int main();
double my_sin( double x );

// Function definitions

// int main()
//
// Compare our implementation of sin(x) using its
// Taylor series with the implementation provided
// by the C++ standard library.
int main() {
    // Print floating-point numbers with 16 digits
    // of precision.
    std::cout.precision( 16 );

    double x{ 3.2 };

    std::cout << "my_sin(x): " << my_sin( x )
              << std::endl;
    std::cout << "std::sin(x): " << std::sin( x )
              << std::endl;
    std::cout << "reference: " << -0.058374143427579909137
              << std::endl;

    return 0;
}

// double my_sin( double x )
//
// Approximate sin(x) using the Taylor series
//
//                 x^3   x^5   x^7
//     sin(x) = x - --- + --- - --- + ...
//                  3!    5!    7!
//
// Rather than calculating each power and factorial
// separately, calculate each term from the previous
// term:
//
//                    x^2
//     next = -term -----------,
//                  n(n + 1)
//
// where n takes the values 2, 4, 6, ...
double my_sin( double x ) {
    if ( !std::isfinite( x ) ) {
        return std::numeric_limits<double>::quiet_NaN();
    }

    double result{ x };
    double term{ x };

    for ( double n{ 2.0 }; ; n += 2.0 ) {
        term *= -(x/n)*(x/(n + 1.0));

        if ( std::abs( term ) < 1e-16 ) {
            break;
        }

        result += term;
    }

    return result;
}