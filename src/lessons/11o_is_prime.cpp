#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    int n{};
    std::cout << "Enter an integer: ";
    std::cin  >> n;

    bool is_prime{ true };

    if ( n <= 1 ) {
        // Any negative integer, 0, or 1 is not prime.
        is_prime = false;
    } else if ( n == 2 ) {
        // Do nothing, as 2 is prime.
    } else if ( n%2 == 0 ) {
        // Any other multiple of 2 is not prime.
        is_prime = false;
    } else {
        // Test whether 'n' is divisible by any odd
        // integer from 3 up to 'n - 1'.
        for ( int k{ 3 }; k < n; k += 2 ) {
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