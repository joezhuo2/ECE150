#include <iostream>

// A company pays its sales representatives according
// to the following commission structure:
//
//   - No commission is paid on the first $20,000
//     in sales.
//
//   - A commission of 8% is paid on all sales
//     above $20,000.
//
//   - If the representative has at least $1,000,000
//     in sales, an additional $50,000 bonus is paid.
//
//   - If the representative has at least $1,500,000
//     in sales, the total bonus is instead $100,000.
//
// Write a program that asks the user for the amount
// sold by a sales representative and then prints the
// total commission, including any bonus.
//
// You may assume that the amount entered is an integer
// number of dollars.
//
// If the user enters a negative amount, immediately
// terminate the program by returning 0 from main().

// Function declarations
int main();

// Function definitions
int main() {
    long long sales;

    std::cout << "Enter the sales amount: ";
    std::cin >> sales;

    if (sales < 0) {
        return 0;
    }
    
    double commission = 0.0;
    if (sales > 20000) {
        commission = (sales - 20000) * 0.08;
    }
    
    double bonus = 0.0;
    if (sales >= 1500000) {
        bonus = 100000.0;
    } else if (sales >= 1000000) {
        bonus = 50000.0;
    }
    
    double total_commission = commission + bonus;
    
    std::cout << "Total commission (including bonus): $" << total_commission << std::endl;

    return 0;
}

