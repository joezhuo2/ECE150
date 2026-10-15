#include <iostream>

// Function declarations
int main();

// Function definitions

// main()
//
// This program uses an approximation of the square root
// that appears to have been known to the ancient Babylonians.
//
// If y is an approximation of sqrt(x), then x/y gives another
// approximation. In particular, if
//
//     y < sqrt(x),
//
// then
//
//     x/y > sqrt(x).
//
// A better approximation can be obtained by taking the
// average of these two values:
//
//     1       x
//     - (y + -)
//     2       y
//
// Repeating this calculation usually produces increasingly
// accurate approximations of sqrt(x).

int main() {
    double x{};

    std::cout << "Enter a value of x: ";
    std::cin  >> x;

    double y{};

    std::cout << "Enter an approximation of sqrt(x): ";
    std::cin  >> y;

    y = (y + x/y)/2.0;

    std::cout << "A better approximation of sqrt(" << x
              << ") = " << y << std::endl;

    y = (y + x/y)/2.0;

    std::cout << "An even better approximation of sqrt(" << x
              << ") = " << y << std::endl;

    y = (y + x/y)/2.0;

    std::cout << "An even better approximation of sqrt(" << x
              << ") = " << y << std::endl;

    return 0;
}

// As an aside, if you are still reading this, there is an
// interesting connection with calculus.
//
// sqrt(x) is a root of the polynomial
//
//                 2
//        p(y) = y  - x
//
// where 'x' is fixed and 'y' is the variable.
//
// If you learned Newton's method in secondary school or in
// a calculus course, you may remember that a better
// approximation of a root is obtained from
//
//                 p(y)
//        y - -------------
//                p'(y)
//
// In this case,
//
//                 2
//        p(y) = y  - x
//
// and
//
//        p'(y) = 2y.
//
// Thus, Newton's method gives
//
//                 2
//                y  - x
//        y - -------------
//                  2y
//
// which simplifies to
//
//          2           2
//        2y  - (y  - x)
//        ---------------
//               2y
//
// and therefore to
//
//          2
//         y  + x
//        --------.
//           2y
//
// This can be rewritten as
//
//        1       x
//        - (y + -),
//        2       y
//
// which is exactly the approximation used above.
//
// Thus, this ancient method for approximating sqrt(x) is
// also an application of Newton's method.
//
// Note: "w.r.t." is sometimes used as an abbreviation for
// "with respect to".