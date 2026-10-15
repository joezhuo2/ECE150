#include <iostream>

// The following function describes a unit pulse:
//
//                    /  0       x < 0
//                   |
//                   |   0.5     x = 0
//                   |
//     pulse(x) =    <   1       0 < x < 1
//                   |
//                   |   0.5     x = 1
//                   |
//                    \  0       x > 1
//
// Its graph is
//
//              |
//          1   |  o-----------o
//              |  |           |
//        0.5   |  *           *
//              |  |           |
//          0 --+--o-----------o---------------- x
//              0              1
//
// The open circles at (0, 1) and (1, 1) indicate that
// the function does not have the value 1 at the endpoints.
//
// Instead,
//
//     pulse(0) = pulse(1) = 0.5.
//
// Write a program that asks the user for a real number 'x'
// and prints the corresponding value of pulse(x).
//
// There are several ways to organize the conditional
// statements. Two approaches are shown below.

// Function declarations
int main();

// Function definitions
int main() {
    double x{};

    std::cout << "Enter a number 'x': ";
    std::cin >> x;

    // Approach 1:
    //
    // First determine whether 'x' is outside the interval
    // [0, 1]. Then check the two endpoints. If neither is
    // true, 'x' must be strictly between 0 and 1.

    if ( (x < 0.0) || (x > 1.0) ) {
        std::cout << 0.0 << std::endl;
    } else if ( (x == 0.0) || (x == 1.0) ) {
        std::cout << 0.5 << std::endl;
    } else {
        std::cout << 1.0 << std::endl;
    }

    return 0;
}

