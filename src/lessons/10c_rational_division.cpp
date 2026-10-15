#include <iostream>

// In Section 1-7, there was an assignment question that
// asked you to print an improper fraction as a mixed
// number. For example,
//
//     52134/321 = 162 + 132/321
//     91/13 = 7
//
// At that point, you were asked to assume that the
// numerator was non-negative and the denominator was
// positive.
//
// Now that you have learned conditional statements,
// extend that program so that
//
//     - the numerator may be any integer,
//     - the denominator may be any nonzero integer,
//     - a denominator of zero is detected,
//     - the fractional part is not printed when the
//       remainder is zero,
//     - a zero integer part is not printed, and
//     - negative fractions are printed naturally.
//
// For example,
//
//      32/5 = 6 + 2/5
//     -32/5 = -6 - 2/5
//      -4/5 = -4/5
//       4/-5 = -4/5
//     -10/-5 = 2
//
// You may assume that the user enters valid integers.

// Function declarations
int main();

// Function definitions
int main() {
    int num{};

    std::cout << "Enter an integer numerator: ";
    std::cin >> num;

    int den{};

    std::cout << "Enter a nonzero integer denominator: ";
    std::cin >> den;

    std::cout << num << "/" << den << " = "
              << (num/den) << " + "
              << (num%den) << "/"
              << den << std::endl;

    return 0;
}