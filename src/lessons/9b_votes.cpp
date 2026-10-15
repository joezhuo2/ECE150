#include <iostream>

// To be eligible to vote in a Canadian federal election,
// a person must, among other requirements,
//
//     1. be a Canadian citizen, and
//     2. be at least 18 years old on election day.
//
// Similar requirements apply to Ontario provincial
// elections.
//
// For this exercise, we will consider only these two
// requirements.
//
// Write a program that asks the user for their age and
// whether they are a Canadian citizen. Then print whether
// or not the user satisfies these two requirements.
//
// Ask the user to enter
//
//     0 for no, or
//     1 for yes
//
// when asked whether they are a Canadian citizen.
//
// If the user enters a negative age or enters something
// other than 0 or 1 for citizenship, print an appropriate
// error message and terminate the program by returning 0
// from main().

// Function declarations
int main();

// Function definitions
int main() {
    int age{};

    std::cout << "Enter your age: ";
    std::cin >> age;

    int is_citizen{};

    std::cout << "Are you a Canadian citizen "
              << "(0 for no, 1 for yes): ";
    std::cin >> is_citizen;

    std::cout << "You are not eligible to vote."
              << std::endl;

    return 0;
}