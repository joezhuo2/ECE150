#include <cmath>
#include <iostream>
#include <numbers>

// Function declarations
int main();

// Function definitions

// int main()
//
// This program:
//   1. prints mathematical constants provided by the
//      standard C++ <numbers> library,
//   2. prints the same constants calculated using
//      functions from the <cmath> library, and
//   3. prints the absolute value of the difference
//      between the stored value and the calculated
//      value.
//
// Since C++20, mathematical constants such as pi and e
// are provided by the standard <numbers> library. For
// example:
//
//     std::numbers::pi
//     std::numbers::e
//     std::numbers::sqrt2
//
// In older C++ code, you may instead see constants such
// as:
//
//     M_E          e
//     M_LOG2E      log_2(e)
//     M_LOG10E     log_10(e)
//     M_LN2        ln(2)
//     M_LN10       ln(10)
//     M_PI         pi
//     M_PI_2       pi/2
//     M_PI_4       pi/4
//     M_1_PI       1/pi
//     M_2_PI       2/pi
//     M_2_SQRTPI   2/sqrt(pi)
//     M_SQRT2      sqrt(2)
//     M_SQRT1_2    1/sqrt(2)
//
// These M_* constants are widely supported, but they
// are not part of the C++ standard. On some systems,
// older programs also required:
//
//     #define _USE_MATH_DEFINES
//     #include <cmath>
//
// to make these constants available.
//
// Modern C++ should instead use the standard constants
// from <numbers>. Not every old M_* constant has a
// corresponding named constant in <numbers>; simple
// quantities such as pi/2 and 1/pi can be calculated
// directly from std::numbers::pi.
int main() {
    std::cout << "    e      = std::numbers::e      = "
              << std::numbers::e << std::endl;
    std::cout << " log_2(e)  = std::numbers::log2e  = "
              << std::numbers::log2e << std::endl;
    std::cout << "log_10(e)  = std::numbers::log10e = "
              << std::numbers::log10e << std::endl;
    std::cout << "   ln(2)   = std::numbers::ln2    = "
              << std::numbers::ln2 << std::endl;
    std::cout << "   ln(10)  = std::numbers::ln10   = "
              << std::numbers::ln10 << std::endl;
    std::cout << "    pi     = std::numbers::pi     = "
              << std::numbers::pi << std::endl;
    std::cout << "   pi/2    = std::numbers::pi/2   = "
              << std::numbers::pi/2.0 << std::endl;
    std::cout << "   pi/4    = std::numbers::pi/4   = "
              << std::numbers::pi/4.0 << std::endl;
    std::cout << "   1/pi    = 1/std::numbers::pi   = "
              << 1.0/std::numbers::pi << std::endl;
    std::cout << "   2/pi    = 2/std::numbers::pi   = "
              << 2.0/std::numbers::pi << std::endl;
    std::cout << "2/sqrt(pi) = 2/sqrt(pi)           = "
              << 2.0/std::sqrt(std::numbers::pi) << std::endl;
    std::cout << " sqrt(2)   = std::numbers::sqrt2  = "
              << std::numbers::sqrt2 << std::endl;
    std::cout << "sqrt(0.5)  = 1/std::numbers::sqrt2 = "
              << 1.0/std::numbers::sqrt2 << std::endl;

    std::cout << std::endl;

    // Even without the constants in <numbers>, these
    // values can be calculated using mathematical
    // functions from <cmath>.
    //
    // For example,
    //
    //     cos(pi) = -1
    //
    // so pi can be calculated as acos(-1). Similarly,
    //
    //     exp(1) = e.
    //
    // The other values can then be calculated from
    // these values and other mathematical functions.

    std::cout << "Here, 'pi' is calculated using std::acos(-1.0)"
              << std::endl;
    std::cout << "and 'e' is calculated using std::exp(1.0)."
              << std::endl;

    double pi{ std::acos(-1.0) };
    double e{ std::exp(1.0) };

    std::cout << "    e      = " << e
              << std::endl;
    std::cout << "  log2(e)  = " << std::log2(e)
              << std::endl;
    std::cout << " log10(e)  = " << std::log10(e)
              << std::endl;
    std::cout << "  log(2)   = " << std::log(2.0)
              << std::endl;
    std::cout << "  log(10)  = " << std::log(10.0)
              << std::endl;
    std::cout << "    pi     = " << pi
              << std::endl;
    std::cout << "   pi/2    = " << pi/2.0
              << std::endl;
    std::cout << "   pi/4    = " << pi/4.0
              << std::endl;
    std::cout << "   1/pi    = " << 1.0/pi
              << std::endl;
    std::cout << "   2/pi    = " << 2.0/pi
              << std::endl;
    std::cout << "2/sqrt(pi) = " << 2.0/std::sqrt(pi)
              << std::endl;
    std::cout << " sqrt(2)   = " << std::sqrt(2.0)
              << std::endl;
    std::cout << "sqrt(0.5)  = " << std::sqrt(0.5)
              << std::endl;

    std::cout << std::endl;

    // Finally, compare the constants from <numbers>
    // with values calculated using <cmath>.
    //
    // A difference of zero means that, on this
    // implementation, the two calculations produced
    // exactly the same representable double value.
    // A nonzero difference does not necessarily mean
    // that either value is incorrect: floating-point
    // calculations generally involve rounding.

    std::cout << "       |e - exp(1)|          = "
              << std::abs(std::numbers::e - e)
              << std::endl;
    std::cout << "   |log2e - log2(e)|         = "
              << std::abs(
                     std::numbers::log2e - std::log2(e)
                 )
              << std::endl;
    std::cout << "  |log10e - log10(e)|        = "
              << std::abs(
                     std::numbers::log10e - std::log10(e)
                 )
              << std::endl;
    std::cout << "     |ln2 - log(2)|          = "
              << std::abs(
                     std::numbers::ln2 - std::log(2.0)
                 )
              << std::endl;
    std::cout << "    |ln10 - log(10)|         = "
              << std::abs(
                     std::numbers::ln10 - std::log(10.0)
                 )
              << std::endl;
    std::cout << "      |pi - acos(-1)|        = "
              << std::abs(std::numbers::pi - pi)
              << std::endl;
    std::cout << "    |pi/2 - acos(-1)/2|      = "
              << std::abs(std::numbers::pi/2.0 - pi/2.0)
              << std::endl;
    std::cout << "    |pi/4 - acos(-1)/4|      = "
              << std::abs(std::numbers::pi/4.0 - pi/4.0)
              << std::endl;
    std::cout << "    |1/pi - 1/acos(-1)|      = "
              << std::abs(
                     1.0/std::numbers::pi - 1.0/pi
                 )
              << std::endl;
    std::cout << "    |2/pi - 2/acos(-1)|      = "
              << std::abs(
                     2.0/std::numbers::pi - 2.0/pi
                 )
              << std::endl;
    std::cout << "|2/sqrt(pi) - calculated|    = "
              << std::abs(
                     2.0/std::sqrt(std::numbers::pi)
                     - 2.0/std::sqrt(pi)
                 )
              << std::endl;
    std::cout << "   |sqrt2 - sqrt(2)|         = "
              << std::abs(
                     std::numbers::sqrt2 - std::sqrt(2.0)
                 )
              << std::endl;
    std::cout << "|1/sqrt2 - sqrt(0.5)|        = "
              << std::abs(
                     1.0/std::numbers::sqrt2
                     - std::sqrt(0.5)
                 )
              << std::endl;

    return 0;
}