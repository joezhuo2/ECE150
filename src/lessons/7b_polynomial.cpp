#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    double x{};

    std::cout << "Enter a value of x: ";
    std::cin >> x;

    //                                2
    // This evaluates the polynomial x  - 2x + 1 using
    // the value of 'x' entered by the user.
    //
    // In C++, multiplication must always be explicitly
    // indicated using the multiplication operator '*'.
    // Thus, x*x represents x squared and 2.0*x
    // represents 2x.

    double y{ x*x - 2.0*x + 1.0 };

    std::cout << " 2"                  << std::endl;
    std::cout << "x  - 2x + 1 = " << y << std::endl;

    // Now that 'y' has been declared and initialized,
    // if you want to give 'y' a new value, you use the
    // assignment operator '='.
    //
    // Modify the following assignment statement so
    // that it evaluates the polynomial
    //
    //       3       2
    //   2.5x  - 4.7x  + 2.3x + 1.4
    //
    // using the value of 'x' entered by the user.
    //
    // If you enter 1.5 for 'x', the result should be
    // 2.7125.

    y = x*x - 2.0*x + 1.0;

    std::cout << y << std::endl;

    // What happens if you accidentally use '^' to
    // represent exponentiation? Uncomment the following
    // two lines and try to compile the program.
    //
    // In C++, '^' is not an exponentiation operator.
    // It is the bitwise exclusive OR operator. Because
    // that operator cannot be applied to values of type
    // 'double', the program will not compile.

    // y = x^2 - 2.0*x + 1.0;
    // std::cout << y << std::endl;

    return 0;
}