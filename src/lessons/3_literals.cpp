#include <iostream>

// Function declaration
int main();

// Function definition
int main() {
      ///////////////////////////////
     // Printing integer literals //
    ///////////////////////////////

    std::cout << "Integers are printed as"
              << " one would expect."
              << std::endl;

    // This prints a string followed by
    // the integer 42.
    //
    // Notice the space immediately before
    // the closing double quote. Without
    // that space, the output would be
    //
    //     is42
    //
    // rather than
    //
    //     is 42

    std::cout << "The answer to the ultimate"
              << " question is "
              << 42
              << std::endl;

    // Negative integer literals are printed
    // in the same manner.
    std::cout << "32 - 42 = "
              << -10
              << std::endl;

      std::cout << std::endl;

      /////////////////////////////////
     // Printing character literals //
    /////////////////////////////////

    // A character literal represents a
    // single character and is enclosed
    // in single quotes.
    //
    // These are alphanumeric characters:
    std::cout << 'a' << 'b' << 'z'
              << 'A' << 'B' << 'Z'
              << '1' << '2' << '0'
              << std::endl;

    // Most symbols on the keyboard can
    // also be written directly as
    // character literals.
    std::cout << '`' << '~' << '!'
              << '@' << '#' << '$'
              << '%' << '^' << '&'
              << '*' << '(' << ')'
              << '-' << '_' << '='
              << '+' << '[' << ']'
              << '{' << '}' << '|'
              << ':' << ';' << '"'
              << '.' << '<' << ','
              << '>' << '?'
              << std::endl;

    // Two characters require special
    // treatment when written as character
    // literals:
    //
    //     '    single quote
    //     \    backslash
    //
    // They must be escaped:
    std::cout << '\''
              << '\\'
              << std::endl;

    // Escape sequences can also represent
    // special characters.
    //
    // For example,
    //
    //     '\t'
    //
    // represents a horizontal tab.
    //
    // The visual width of a tab depends
    // on the terminal or environment
    // displaying the output.
    std::cout << 10
	      << '\t'
              << 4
              << std::endl;

    std::cout << std::endl;

      //////////////////////////////
     // Printing string literals //
    //////////////////////////////

    // A string is a sequence of zero or
    // more characters.
    //
    // A string literal is enclosed in
    // double quotes:
    //
    //     "Hello"
    //
    // Compare:
    //
    //     'H'    a character literal
    //     "H"    a string literal
    //
    // These are different kinds of values
    // in C++, even though they may appear
    // the same when printed.
    //  - Recall, the empty string "" if printed
    //    would not print anything. On the other
    //    hand, there is no such thing as an 
    //    'empty' character. Perhaps a space, ' ',
    //    but that is a character.

    std::cout << "I am afraid I can't do that"
              << " Dave."
              << std::endl;

    // If a line of output is wider than
    // the console window, the terminal may
    // visually wrap it onto the next line.
    //
    // This wrapping is performed by the
    // terminal. It does not mean that the
    // program printed a newline character.

    std::cout << "Look Dave, I can see"
              << " you're really upset about"
              << " this. I honestly think"
              << " you ought to sit down"
              << " calmly, take a stress"
              << " pill, and think things"
              << " over."
	      << std::endl; 


    // To include a double quote or a
    // backslash inside a string literal,
    // the character must be escaped using
    // a backslash.
    //
    //     \"    double quote
    //     \\    backslash

    std::cout << "A single quote ',"
              << " a double quote \" and"
              << " a backslash \\"
              << std::endl;

    std::cout << "My home directory is "
              << "\"C:\\Users\\Douglas\\\""
              << std::endl;

    std::cout << std::endl;

      //////////////////////////////////////
     // Printing floating-point literals //
    //////////////////////////////////////

    // By default, std::cout generally prints
    // floating-point values using six
    // significant digits.
    //
    // This does not mean that the value is
    // stored using only six digits. It only
    // describes the default formatting of
    // the output.

    std::cout << "For floating-point values,"
              << " by default, approximately"
              << " six significant digits are"
              << " printed."
              << std::endl;

    std::cout << "pi = "
              << 3.141592654
              << std::endl;

    std::cout << "c = "
              << 299792.458
              << " km/s"
              << std::endl;

    // Notice that the number of digits
    // after the decimal point is not fixed.
    // The default formatting is based on
    // significant digits.

    std::cout << "123456.7 = "
              << 123456.7
              << std::endl;

    std::cout << "1/3 is approximately "
              << 0.33333333333
              << std::endl;

    std::cout << "2/3 is approximately "
              << 0.66666666666
              << std::endl;

    std::cout << "0.001234567 = "
              << 0.001234567
              << std::endl;

    // For sufficiently large or sufficiently
    // small values, the default formatting may
    // switch to scientific notation.
    std::cout << "Very large and very small"
              << " floating-point values may"
              << " be printed using scientific"
              << " notation."
              << std::endl;

    std::cout << "c = "
              << 1079252848.8
              << " km/h"
              << std::endl;

    std::cout << "h = "
              << 0.000000000000000000000000000000000662607004
              << " kg m^2/s"
              << std::endl;

    std::cout << std::endl;

      ////////////////////////////////
     // Printing Boolean literals  //
    ////////////////////////////////

    // C++ has two Boolean literals:
    //
    //     true
    //     false
    //
    // By default, std::cout prints these
    // as the integers 1 and 0,
    // respectively.

    std::cout << "true:  "
              << true
              << std::endl;


    std::cout << "false: "
              << false
              << std::endl;

    // Later, we will see how to ask
    // std::cout to print the words
    //
    //     true
    //     false
    //
    // instead of 1 and 0.

    return 0;
}