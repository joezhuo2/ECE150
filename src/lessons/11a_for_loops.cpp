#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    int n{};
    std::cout << "How many times should the for loop execute? ";
    std::cin  >> n;

    for ( int k{ 1 }; k <= n; ++k ) {
        std::cout << "k = " << k << std::endl;
    }

    return 0;
}