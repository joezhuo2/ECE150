#include <iostream>

// Function declaration
int main();

// Function definition
int main() {
    // If a local variable of one of these
    // fundamental types is initialized with
    // an empty pair of braces, {}, it is
    // value-initialized.
    //
    // For the types shown here, this results
    // in the following values:
    //
    //     int       0
    //     char      '\0'    (the null character)
    //     double    0.0
    //     bool      false
    //
    // Thus, unlike the uninitialized variables
    // in the previous example, all four of these
    // variables have well-defined initial values.

    int n{};
    char ch{};
    double x{};
    bool is_valid{};

    std::cout << n        << std::endl;
    std::cout << ch       << std::endl;
    std::cout << x        << std::endl;
    std::cout << is_valid << std::endl;

    std::cout << std::endl;

    // You can also explicitly specify the
    // initial value between the braces.
    //
    // If you want the reader of your code to
    // see immediately which initial value you
    // intend, explicitly specifying that value
    // may make your intention clearer.

    int m{0};
    char chr{'\0'};
    double y{0.0};
    bool is_invalid{false};

    std::cout << m          << std::endl;
    std::cout << chr        << std::endl;
    std::cout << y          << std::endl;
    std::cout << is_invalid << std::endl;

    // For floating-point types, this author
    // prefers to include a decimal point when
    // specifying a floating-point initial value.
    // For example:
    //
    //     double a{0.0};
    //     double b{0};
    //
    // Both declarations are valid and initialize
    // the variable to the same numerical value.
    // The first, however, makes it visually clear
    // that the intended value is floating-point.
    //
    // Similarly, explicitly writing
    //
    //     bool done{false};
    //
    // may communicate more information to the
    // reader than simply writing
    //
    //     bool done{};
    //
    // even though both initialize 'done' to false.

    return 0;
}