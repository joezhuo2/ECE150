#include <iostream>

// This program demonstrates short-circuit evaluation.
//
// The logical operators
//
//     ||    logical OR
//     &&    logical AND
//
// evaluate their operands from left to right. In some
// situations, the value of the entire expression is known
// without evaluating all of its operands.
//
// Consider
//
//     condition1 || condition2
//
// If 'condition1' is true, the entire expression must be
// true regardless of 'condition2'. Consequently,
// 'condition2' is not evaluated.
//
// Similarly, consider
//
//     condition1 && condition2
//
// If 'condition1' is false, the entire expression must be
// false regardless of 'condition2'. Consequently,
// 'condition2' is not evaluated.
//
// This behavior is called short-circuit evaluation.
//
// Short-circuit evaluation is particularly useful when a
// later expression should only be evaluated if an earlier
// condition is satisfied.
//
// For example, integer division by zero and calculating an
// integer remainder using zero are invalid operations:
//
//     10/0
//     10%0
//
// We can use short-circuit evaluation to ensure that these
// expressions are never evaluated when the denominator is
// zero.

// Function declarations
int main();

// Function definitions
int main() {
    int n{};

    std::cout << "Enter an integer: ";
    std::cin >> n;

    // We want to determine whether
    //
    //             |10/n| > 1.
    //
    // This question only makes sense if n != 0.
    //
    // If n == 0, the first condition below is false.
    // Because the conditions are joined by &&, C++ then
    // knows that the entire expression must be false.
    // Consequently, neither expression containing 10/n
    // is evaluated.
    //
    // If n != 0, the first condition is true, so C++ must
    // continue evaluating the remaining conditions.
    //
    // The expression
    //
    //     ((10/n) > 1) || ((10/n) < -1)
    //
    // checks whether the integer quotient is either
    // greater than 1 or less than -1.

    if ( (n != 0)
         && (((10/n) > 1) || ((10/n) < -1)) ) {
        std::cout << "|10/" << n << "| > 1"
                  << std::endl;
    }

    // Try removing the first condition:
    //
    //     if ( ((10/n) > 1) || ((10/n) < -1) ) {
    //
    // What happens if the user enters 0?

    // We can use the same idea when determining whether
    // 'n' is a divisor of 10.
    //
    // The expression
    //
    //     10%n
    //
    // must not be evaluated when n == 0.
    //
    // If n == 0, the first condition is false. Since the
    // conditions are joined by &&, the second condition
    // is not evaluated.

    if ( (n != 0) && ((10%n) == 0) ) {
        std::cout << n << " is a divisor of 10"
                  << std::endl;
    }

    // Short-circuit evaluation is therefore more than
    // simply a way of avoiding unnecessary calculations.
    // The order of the conditions can be used to ensure
    // that an expression is evaluated only when it is
    // valid to do so.
    //
    // For example, reversing the conditions above gives
    //
    //     if ( ((10%n) == 0) && (n != 0) ) {
    //
    // This appears to test the same two mathematical
    // conditions, but it is unsafe: 10%n is evaluated
    // before C++ checks whether n is zero.

    return 0;
}