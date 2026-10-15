#include <iostream>

// C++ provides compound assignment operators that combine
// an arithmetic operation with assignment.
//
// For example,
//
//     n += 16;
//
// means, approximately,
//
//     n = n + 16;
//
// and
//
//     n *= 5;
//
// means, approximately,
//
//     n = n * 5.
//
// The compound assignment operators introduced here are
//
//     +=    add and assign
//     -=    subtract and assign
//     *=    multiply and assign
//     /=    divide and assign
//     %=    find the remainder and assign
//
// C++ also provides the increment and decrement operators:
//
//     ++    increment by one
//     --    decrement by one
//
// Thus,
//
//     ++n;
//
// increases the value stored in 'n' by one, while
//
//     --n;
//
// decreases it by one.

// Function declarations
int main();

// Function definitions
int main() {
    int n{ 42 };

    std::cout << "n = " << n << std::endl;

    std::cout << "n += 16;" << std::endl;
    n += 16;
    std::cout << "   n = " << n << std::endl;

    std::cout << "n -= 7;" << std::endl;
    n -= 7;
    std::cout << "   n = " << n << std::endl;

    std::cout << "n *= 5;" << std::endl;
    n *= 5;
    std::cout << "   n = " << n << std::endl;

    std::cout << "n /= 3;" << std::endl;
    n /= 3;
    std::cout << "   n = " << n << std::endl;

    std::cout << "n %= 10;" << std::endl;
    n %= 10;
    std::cout << "   n = " << n << std::endl;

    std::cout << "++n;" << std::endl;
    ++n;
    std::cout << "   n = " << n << std::endl;

    std::cout << "--n;" << std::endl;
    --n;
    std::cout << "   n = " << n << std::endl;

    return 0;
}

// Why do compound assignment operators exist?
//
// C++ inherited these operators from C, which in turn
// inherited the idea from earlier languages in the same
// family. They provide a concise way to express a very
// common operation: modifying a variable using the value
// already stored in that variable.
//
// For example,
//
//     n += 5;
//
// clearly says:
//
//     "Increase the value stored in 'n' by 5."
//
// This is shorter and often easier to read than
//
//     n = n + 5;
//
// especially when the expression identifying the object
// being modified is more complicated.
//
// There was also an important connection with the
// computers on which early C-like languages were used.
// Many processors provided machine instructions that
// could directly modify a value stored in a register or
// in memory. Conceptually, a machine could perform an
// operation such as
//
//     add 5 to this value
//
// without the programmer having to describe the operation
// as a separate calculation followed by an assignment.
//
// Consequently, an expression such as
//
//     n += 5;
//
// corresponded naturally to the kinds of operations that
// processors could perform efficiently.
//
// Modern optimizing compilers normally generate equally
// efficient machine code for simple expressions such as
//
//     n += 5;
//
// and
//
//     n = n + 5;
//
// so you should not normally choose compound assignment
// today because you expect it to make the program faster.
// Use it because it directly expresses the idea that the
// existing value of a variable is being modified.
//
// The increment and decrement operators are even more
// specialized:
//
//     ++n;
//
// and
//
//     --n;
//
// express the extremely common operations of increasing
// or decreasing a value by one. These operations also
// corresponded naturally to instructions provided by
// many processors.