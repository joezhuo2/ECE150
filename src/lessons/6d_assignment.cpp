#include <iostream>

// Function declaration
int main();

// Function definition
int main() {
    // The initial value of a local variable may be
    // specified when the variable is declared by
    // placing that value between braces following
    // the variable identifier.
    
    int n{1024};
    char ch{'!'};
    double x{6.62607015e-34};
    bool is_valid{true};
    
    std::cout << "Initial values of these local variables:"
              << std::endl;
    
    std::cout << n        << std::endl;
    std::cout << ch       << std::endl;
    std::cout << x        << std::endl;
    std::cout << is_valid << std::endl;
    
    std::cout << std::endl;
    
    // Once a variable has been initialized, we can
    // assign a new value to it.
    //
    // Always read
    //
    //     n = 32;
    //
    // as
    //
    //     "'n' is assigned the value 32."
    //
    // Do not read this as
    //
    //     "'n' equals 32."
    //
    // The symbol '=' represents assignment in this
    // context, not a statement of mathematical
    // equality.
    //
    // After the assignment has been performed, it is
    // true that 'n' has the value 32, but assigning
    // that value is the operation being performed.
    
    // When a new value is assigned to a variable,
    // the value previously stored in that variable
    // is replaced.
    //
    // If that old value has not been stored
    // somewhere else, the program can no longer
    // obtain it from this variable.
    
    n = 256;
    ch = '*';
    x = 9.8696044010893586;
    is_valid = false;
    
    std::cout << "Values after assignment:"
              << std::endl;
    
    std::cout << n        << std::endl;
    std::cout << ch       << std::endl;
    std::cout << x        << std::endl;
    std::cout << is_valid << std::endl;
    
    std::cout << std::endl;
    
    // If you want to preserve the current value of
    // a variable before assigning it a new value,
    // you must store that value somewhere else.
    //
    // One way to do this is to initialize another
    // variable with the current value.
    
    std::cout << "Current value of 'n': "
              << n
              << std::endl;
    
    // Initialize 'tmp' with the current value of 'n'.
    int tmp{ n };
    
    // Assign a new value to 'n'.
    n = 1970;
    
    std::cout << "New value of 'n': "
              << n
              << std::endl;
    
    std::cout << "Value preserved in 'tmp': "
              << tmp
              << std::endl;
    
    return 0;
}