#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    double radius{};

    std::cout << "Enter the radius of a sphere: ";
    std::cin >> radius;

    // Initialize 'pi' with an appropriate approximation.
    //
    // A value of type 'double' typically stores approximately
    // 15 to 17 significant decimal digits of precision. By
    // supplying enough digits here, we allow the compiler to
    // store the best available approximation of pi.

    double pi{ 3.1415926535897932 };

    // The volume of a sphere is
    //
    //             4     3
    //       V = ----- pi r
    //             3
    //
    // The parentheses around 4.0/3.0 are not required, but
    // they make the expression easier to read and emphasize
    // that 4.0/3.0 is one factor in the calculation.

    double volume{ (4.0/3.0)*pi*radius*radius*radius };

    std::cout << "The volume of the sphere is "
              << volume << std::endl;

    // The surface area of a sphere is
    //
    //                   2
    //       A = 4 pi r
    //
    // We could write 4*pi*radius*radius. Using 4.0 instead
    // emphasizes to the reader that this calculation involves
    // floating-point values.

    double area{ 4.0*pi*radius*radius };

    std::cout << "The surface area of the sphere is "
              << area << std::endl;

    // What happens if you use 4/3 instead of 4.0/3.0?
    //
    // Uncomment the following assignment and output statement
    // and execute the program again. Do you get the expected
    // volume? Why or why not?

    // volume = (4/3)*pi*radius*radius*radius;
    // std::cout << "The volume of the sphere is "
    //           << volume << std::endl;

  return 0;
}