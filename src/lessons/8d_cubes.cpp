#include <iostream>

// Query the user for two integers, 'm' and 'n'.
//
// Determine whether 'm' is less than, equal to, or greater
// than the cube root of 'n', and display the corresponding
// message, so for example:
//
//   -5 is less than the cube root of -100.
//   3 is equal to the cube root of 27.
//   12 is greater than the cube root of 1700.
//
// Do not use floating-point numbers and do not calculate a
// cube root. Instead, use integer arithmetic and conditional
// statements.
//
// Once you have received values of 'm' and 'n' from the user,
// consider how you could determine the relationship between
//
//                 m and the cube root of n
//
// without actually calculating a cube root.
//
// Recall that cubing preserves the order of real numbers.
// For example, if
//
//                 a < b,
//
// what can you say about
//
//                 a^3 and b^3?
//
// Use this observation to write an if--else-if--else statement
// that determines which of the three messages to display.
//

int main();

int main() {
    std::cout << "Enter integer m: ";
    std::cin >> m;
    std::cout << "Enter integer n: ";
    std::cin >> n;

    long long m_cubed = m * m * m;

    if (m_cubed < n) {
        std::cout << m << " is less than the cube root of " << n << "." << std::endl;
    } else if (m_cubed == n) {
        std::cout << m << " is equal to the cube root of " << n << "." << std::endl;
    } else {
        std::cout << m << " is greater than the cube root of " << n << "." << std::endl;
    }

    return 0;
}