#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    int n{};
    std::cout << "Enter an integer: ";
    std::cin  >> n;

    bool is_prime{ true };

    // If 'n' is a negative integer, 0, or 1, it is
    // not a prime number, so do not bother testing it.
    if ( n < 2 ) {
        is_prime = false;
    } else {
        // See if 'n' is divisible by any integer from
        // 2 up to 'n - 1'. If it is, then 'n' is
        // not prime.
        //
        // Note that "'n' is divisible by 'k'" is
        // equivalent to saying that n%k == 0; that is,
        // the remainder when 'n' is divided by 'k'
        // is zero.
        for ( int k{ 2 }; k < n; ++k ) {
            if ( n%k == 0 ) {
                is_prime = false;

                // We have found a divisor, so there is
                // no reason to continue searching.
                break;
            }
        }
    }

    if ( is_prime ) {
        std::cout << "The integer " << n << " is prime."
                  << std::endl;
    } else {
        std::cout << "The integer " << n << " is not prime."
                  << std::endl;
    }

    return 0;
}