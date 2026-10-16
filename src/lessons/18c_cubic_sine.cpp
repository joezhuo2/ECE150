#include <cmath>
#include <iostream>
#include <numbers>

// Function declarations
int main();
double cubic_sin( double x );

// Function definitions
int main() {
    for ( int k{ 0 }; k <= 10; ++k ) {
        double x{ std::numbers::pi/2.0*(0.1*k) };

        std::cout << x << ",\t"
                  << cubic_sin( x ) << ",\t"
                  << std::sin( x ) << std::endl;
    }

    return 0;
}

// double cubic_sin( ... )
//
// @author    Douglas Wilhelm Harder
// @date      2020-09-09
// @version   2.0
//
// @param x    a real number
//
// @returns    a cubic approximation of sin(x)
//
// @algorithm
// Consider a cubic polynomial of the form
//
//                  3     2
//        p(x) =  ax  + bx  + cx + d.
//
// We require that this polynomial have the same values
// and derivatives as sin(x) at the endpoints of the
// interval [0, pi/2]:
//
//     1.  p(0)    = 0
//     2. p'(0)    = 1
//     3.  p(pi/2) = 1
//     4. p'(pi/2) = 0
//
// where
//
//                   2
//       p'(x) = 3ax  + 2bx + c.
//
// These four constraints create a system of four linear
// equations in four unknowns. Solving these equations
// gives
//
//           4    16         -4    3
//      a = --- - ---,   b = -- + ---,   c = 1,   d = 0.
//            2     3        pi     2
//          pi    pi              pi
//
// You do not need to know how to solve this system for
// this class. You will learn more about systems of linear
// equations and polynomial approximation in your courses
// on linear algebra and numerical analysis.
//
// This is more precisely called a cubic Hermite
// interpolant rather than a cubic spline. A spline
// generally consists of multiple polynomial pieces
// joined together at points called knots.
//
// Before C++20, code often used the non-standard M_PI
// constant:
//
//     #define _USE_MATH_DEFINES
//     #include <cmath>
//
//     double x{ M_PI/2.0 };
//
// M_PI is widely supported, but it is not part of the
// C++ standard. Since C++20, the standard <numbers>
// library provides:
//
//     std::numbers::pi
//
// If <numbers> is not available, pi can also be
// calculated using
//
//     double pi{ std::acos(-1.0) };
//
// because cos(pi) = -1.
//
// Exercises:
//   1. Verify that
//
//          cubic_sin(0) == 0
//
//      and
//
//          cubic_sin(std::numbers::pi/2.0) == 1.
//
//   2. Compare the approximation with std::sin(x) for
//      values of x between 0 and pi/2.
//
//   3. Modify the program so that it also prints the
//      absolute error
//
//          |cubic_sin(x) - std::sin(x)|.
//
//   4. What happens if you use this approximation for
//      values of x outside the interval [0, pi/2]?

double cubic_sin( double x ) {
    double pi{ std::numbers::pi };

    return 4.0*x*x/(pi*pi)*(
               x - 4.0/pi*x - pi + 3.0
           ) + x;
}