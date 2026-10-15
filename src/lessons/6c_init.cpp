#include <iostream>

// Function declaration
int main();

// Function definition
int main() {
    // Instead of using empty braces, {}, to
    // value-initialize a local variable, you can
    // specify its initial value between the braces.
    //
    // The general form is
    //
    //     type identifier{ initial_value };
    //
    // For example, each of the following variables
    // is initialized when it is declared:

    int n{ 1024 };
    char ch{ '!' };
    double x{ 6.62607015e-34 };
    bool is_valid{ true };

    // The values stored in these variables can
    // then be used. Here, we print each value:
    std::cout << n        << std::endl;
    std::cout << ch       << std::endl;
    std::cout << x        << std::endl;
    std::cout << is_valid << std::endl;

    // Notice that the form of each initial value
    // reflects the kind of value being stored:
    //
    //     1024            an integer literal
    //     '!'             a character literal
    //     6.62607015e-34  a floating-point literal
    //     true            a Boolean literal
    //
    // Recall that, by default, std::cout prints
    // Boolean values as 1 or 0. Consequently, the
    // final line printed above is
    //
    //     1
    //
    // even though 'is_valid' was initialized with
    // the Bool

    return 0;
}

  ///////////////
 // Important //
///////////////

// Many of you will use the initialization
//
//     int k = 5;
//
// instead of
//
//     int k{ 5 };
//
// Both are valid C++. In this course, you are
// welcome to use whichever form you prefer.
//
// Note:
//   The {...} notation was introduced in C++11 as
//   part of an effort to provide a uniform syntax
//   for initializing objects, regardless of their
//   type. You will therefore see this notation used
//   with fundamental types, arrays, structures,
//   classes, and other types throughout C++.
//
// What we want to emphasize is that initialization
// and assignment are two different operations.
//
// For example,
//
//     int k = 5;
//
// initializes 'k' with the value 5. The '=' here
// is part of the initialization syntax; it is not
// an assignment operation.
//
// By contrast, we will see that
//
//     k = 6;
//
// assigns a new value to an object that already
// exists.
//
// Later, when we introduce classes, we will see
// that the choice of initialization syntax can
// sometimes affect how an object is constructed.
// We will also encounter situations in which
// brace initialization is particularly useful.
//
// For now, either
//
//     int k = 5;
//
// or
//
//     int k{ 5 };
//
// is acceptable. The important distinction is
// between initializing an object when it is
// created and assigning a new value to an object
// that already exists.