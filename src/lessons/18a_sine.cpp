#include <cmath>
#include <iostream>

// Function declarations
int main();
double my_sin( double x );

// Function definitions
int main() {
    double x{};
    std::cout << "Enter a number: ";
    std::cin  >> x;

    std::cout << "Approximation of sine using our version"
              << std::endl;
    std::cout << "     my_sin(" << x << ") = "
              << my_sin( x ) << std::endl;

    std::cout << "Approximation of sine using the standard "
              << "library" << std::endl;
    std::cout << "   std::sin(" << x << ") = "
              << std::sin( x ) << std::endl;

    return 0;
}

// double my_sin( ... )
//
// @author    Douglas Wilhelm Harder
// @date      2020-09-09
// @version   1.0
//
// @param x    a real number
//
// @returns    a reasonable approximation of
//             sin(x) if -0.908 <= x <= 0.908
//              - Outside this interval, the absolute
//                error of the approximation may
//                exceed 0.0001.
//
// @algorithm
// This function approximates sin(x) using a fifth-order
// Taylor polynomial. You will learn about Taylor series
// in your first-year calculus course, so you do not have
// to know how this formula was derived. Essentially, you
// will see that
//
//                 3      5      7      9      11
//                x      x      x      x      x
//  sin(x) = x - ---- + ---- - ---- + ---- - ----- + ...
//                3!     5!     7!     9!     11!
//
// The more terms you include, the better the approximation
// generally becomes near x = 0. This function uses only
// the first three terms. Because we have not yet discussed
// functions for calculating powers, x^5 is calculated as
//
//     x*x*x*x*x
//
// Exercises:
//   1. Modify the function so that it includes the
//      fourth term of the Taylor series.
//       - You should get
//
//             my_sin(1) = 0.8414682539
//             my_sin(2) = 0.9079365079
//
//         although you will see only six significant
//         digits with the default output precision.

double my_sin( double x ) {
    double result{
        x - x*x*x/6.0 + x*x*x*x*x/120.0
    };

    return result;
}