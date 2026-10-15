#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    int n{};
    std::cout << "Enter an integer: ";
    std::cin >> n;

    int sum{ 0 };

    for ( int k{ 1 }; k <= n; ++k ) {
        sum += k;
    }

    std::cout << "The sum of the integers from 1 to "
              << n << " equals " << sum << std::endl;

    std::cout << std::endl;

    // A general arithmetic sum is:
    //     a + (a + d) + (a + 2d) + ... + (a + nd)
    // This calculates the sum by having the user enter
    // the values of 'a' and 'd' and then explicitly
    // adding 'a + kd' to the sum for k = 0, ..., n.
    //
    // Note that above, 'sum' was declared to be of type
    // 'int', so we cannot reuse that identifier for a
    // local variable of type 'double'; hence, we declare
    // a different local variable 'dsum'.

    double a{};
    std::cout << "Enter an initial value 'a': ";
    std::cin  >> a;

    double d{};
    std::cout << "Enter a difference 'd': ";
    std::cin  >> d;

    double dsum{ 0.0 };

    for ( int k{ 0 }; k <= n; ++k ) {
        dsum += a + d*k;
    }

    std::cout << "The sum a + (a + d) + ... + (a + "
              << n << "d) is " << dsum << std::endl;

    return 0;
}