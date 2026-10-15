#include <iostream>

// Function declaration
int main();

// Function definition
int main() {
    int n;
    char ch;
    double x;
    bool is_valid;

    // These local variables have been declared,
    // but they have not been initialized.
    //
    // Consequently, you must not use their values
    // until values have first been assigned to them.
    //
    // For example, none of these declarations
    // initializes the corresponding variable:
    //
    //     int n;
    //     char ch;
    //     double x;
    //     bool is_valid;
    //
    // It is tempting to imagine that each variable
    // simply contains whatever sequence of bits
    // happened to be present in its memory location.
    // That may help explain some of the results you
    // observe, but it is not a rule on which a C++
    // program may rely.
    //
    // In particular, you must NOT assume that
    // uninitialized variables have the values
    //
    //     int     0
    //     char    '\0'
    //     double  0.0
    //     bool    false
    //
    // You may sometimes observe values such as these,
    // especially in simple programs or particular
    // development environments. You may also observe
    // apparently random values, different values on
    // different executions, or other unexpected
    // behaviour.
    //
    // Therefore, the following statements use
    // variables before they have been initialized.
    // They are deliberately incorrect C++ code and
    // are shown here only as an experiment.
    //
    // Try compiling this program with compiler
    // warnings enabled. Then try different compiler
    // settings or different systems and compare the
    // results and warnings.

    std::cout << n        << std::endl;
    std::cout << ch       << std::endl;
    std::cout << x        << std::endl;
    std::cout << is_valid << std::endl;

    // The solution is simple: initialize variables
    // before using them. For example:
    //
    //     int n{ 0 };
    //     char ch{ '\0' };   // The null character
    //     double x{ 0.0 };
    //     bool is_valid{ false };
    //
    // Better still, when possible, initialize a
    // variable with the value it is actually meant
    // to have rather than first giving it an
    // arbitrary default value.
    //  - Note, the null character is not an empty
    //    character. 

    return 0;
}