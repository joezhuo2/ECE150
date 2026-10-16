#include <iostream>
#include <numbers>

// Function declarations
int main();

// Function definitions

// int main()
//
// This program queries the user for the radius of a
// sphere and then prints both the surface area and
// volume of that sphere.
//
// Rather than using a literal floating-point number
// that is sufficiently close to pi, we use the
// mathematical constant std::numbers::pi provided by
// the C++20 <numbers> library.
//
// In older C++ code, you may see M_PI used instead:
//
//     #define _USE_MATH_DEFINES
//     #include <cmath>
//
//     double area{ 4.0*M_PI*radius*radius };
//
// M_PI is widely supported, but it is not part of the
// C++ standard. Since C++20, std::numbers::pi is the
// standard way to obtain the mathematical constant pi.
//
// Exercises:
//  1. Modify this code so that it calculates the circumference
//     and area of a circle.
//  2. Modify this code so that it calculates the surface
//     area and volume of a cube.
//  3. Modify this code so that it calculates the surface
//     area and volume of a regular dodecahedron.
int main() {
    double radius{};
    std::cout << "Enter the radius of a sphere: ";
    std::cin  >> radius;

    double area{ 4.0*std::numbers::pi*radius*radius };
    double volume{ (4.0/3.0)*std::numbers::pi*radius*radius*radius };

    std::cout << "The surface area is " << area   << std::endl;
    std::cout << "The volume is "       << volume << std::endl;

    return 0;
}