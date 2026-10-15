#include <iostream>

// Many calendar systems designate a particular year as
// year 1. For example, in the traditional numbering of
// years in the Gregorian calendar, the sequence around
// the beginning of the Common Era is
//
//     3 BCE, 2 BCE, 1 BCE, 1 CE, 2 CE, 3 CE, ...
//
// Notice that there is no year 0.
//
// We will represent CE years using positive integers and
// BCE years using negative integers. Thus,
//
//     -3 represents 3 BCE,
//     -1 represents 1 BCE,
//      1 represents 1 CE, and
//      3 represents 3 CE.
//
// Consequently, 0 is not a valid year.
//
// Write a program that asks the user for two years. The
// second year must be the same as or later than the first.
//
// If either year is 0, print an appropriate error message
// and terminate the program by returning 0 from main().
//
// If the second year is earlier than the first, print an
// appropriate error message and terminate the program.
//
// Calculate the number of years from the first year through
// the second year, including both given years.
//
// For example, the years from 1970 through 1980 are
//
//     1970, 1971, ..., 1979, 1980,
//
// so there are 11 years.
//
// Similarly, the years from -5 through -2 are
//
//     -5, -4, -3, -2,
//
// so there are 4 years.
//
// There is one important special case. If the first year is
// negative and the second year is positive, the interval
// crosses from BCE to CE. Since there is no year 0, the
// usual calculation must be adjusted.
//
// Determine the appropriate formulas and implement them.

// Function declarations
int main();

// Function definitions
int main() {
    int year1{};

    std::cout << "Enter the first year: ";
    std::cin >> year1;

    int year2{};

    std::cout << "Enter the second year: ";
    std::cin >> year2;

    if (year1 == 0 || year2 == 0) {
        std::cout << "Error: Year 0 does not exist." << std::endl;
        return 0;
    }

    if (year2 < year1) {
        std::cout << "Error: The second year must be the same as or later than the first year." << std::endl;
        return 0;
    }

    int total_years = 0;

    if (year1 < 0 && year2 > 0) {
        total_years = year2 - year1;
    } else {
        total_years = year2 - year1 + 1;
    }

    std::cout << total_years << std::endl;

    return 0;
}