#include <iostream>

// Function declarations
int main();

// Function definitions
int main() {
    // When both operands are integers, integer division is
    // performed. Any fractional part of the result is discarded.
    // This is equivalent to truncating the result toward zero.
    //
    // For example,
    //
    //      9.0/4.0 =  2.25, so  9/4 =  2
    //     -9.0/4.0 = -2.25, so -9/4 = -2
    //
    // Consequently, if |m| < |n|, then m/n = 0.

    std::cout << "Integer division" << std::endl;
    std::cout << "-9/4 = " << (-9/4) << std::endl;
    std::cout << "-8/4 = " << (-8/4) << std::endl;
    std::cout << "-7/4 = " << (-7/4) << std::endl;
    std::cout << "-6/4 = " << (-6/4) << std::endl;
    std::cout << "-5/4 = " << (-5/4) << std::endl;
    std::cout << "-4/4 = " << (-4/4) << std::endl;
    std::cout << "-3/4 = " << (-3/4) << std::endl;
    std::cout << "-2/4 = " << (-2/4) << std::endl;
    std::cout << "-1/4 = " << (-1/4) << std::endl;
    std::cout << " 0/4 = " << ( 0/4) << std::endl;
    std::cout << " 1/4 = " << ( 1/4) << std::endl;
    std::cout << " 2/4 = " << ( 2/4) << std::endl;
    std::cout << " 3/4 = " << ( 3/4) << std::endl;
    std::cout << " 4/4 = " << ( 4/4) << std::endl;
    std::cout << " 5/4 = " << ( 5/4) << std::endl;
    std::cout << " 6/4 = " << ( 6/4) << std::endl;
    std::cout << " 7/4 = " << ( 7/4) << std::endl;
    std::cout << " 8/4 = " << ( 8/4) << std::endl;
    std::cout << " 9/4 = " << ( 9/4) << std::endl;
    std::cout << std::endl;

    // For positive integers 'm' and 'n', m%n calculates
    // the remainder when 'm' is divided by 'n'.
    //
    // For example,
    //
    //      17              17%5         2
    //     ---- = (17/5) + ------ = 3 + ---
    //       5                5          5
    //
    // Equivalently,
    //
    //     m = (m/n)*n + m%n.
    //
    // For example,
    //
    //     17 = (17/5)*5 + 17%5
    //        =       3*5 + 2
    //        = 17.

    std::cout << "n = (n/5)*5 + (n%5)" << std::endl;
    std::cout << "14 = " << (14/5) << "*5 + " << (14%5)
              << " = " << ((14/5)*5 + (14%5)) << std::endl;
    std::cout << "15 = " << (15/5) << "*5 + " << (15%5)
              << " = " << ((15/5)*5 + (15%5)) << std::endl;
    std::cout << "16 = " << (16/5) << "*5 + " << (16%5)
              << " = " << ((16/5)*5 + (16%5)) << std::endl;
    std::cout << "17 = " << (17/5) << "*5 + " << (17%5)
              << " = " << ((17/5)*5 + (17%5)) << std::endl;
    std::cout << "18 = " << (18/5) << "*5 + " << (18%5)
              << " = " << ((18/5)*5 + (18%5)) << std::endl;
    std::cout << "19 = " << (19/5) << "*5 + " << (19%5)
              << " = " << ((19/5)*5 + (19%5)) << std::endl;
    std::cout << "20 = " << (20/5) << "*5 + " << (20%5)
              << " = " << ((20/5)*5 + (20%5)) << std::endl;
    std::cout << "21 = " << (21/5) << "*5 + " << (21%5)
              << " = " << ((21/5)*5 + (21%5)) << std::endl;
    std::cout << std::endl;

    // The same identity
    //
    //     m = (m/n)*n + m%n
    //
    // must also hold when 'm' is negative. Because integer
    // division truncates toward zero, when 'm' is negative
    // and 'n' is positive, m%n is either zero or negative.

    std::cout << "For negative values of n:" << std::endl;
    std::cout << "-n = (-n/5)*5 + (-n%5)" << std::endl;
    std::cout << "-14 = " << (-14/5) << "*5 + " << (-14%5)
              << " = " << ((-14/5)*5 + (-14%5)) << std::endl;
    std::cout << "-15 = " << (-15/5) << "*5 + " << (-15%5)
              << " = " << ((-15/5)*5 + (-15%5)) << std::endl;
    std::cout << "-16 = " << (-16/5) << "*5 + " << (-16%5)
              << " = " << ((-16/5)*5 + (-16%5)) << std::endl;
    std::cout << "-17 = " << (-17/5) << "*5 + " << (-17%5)
              << " = " << ((-17/5)*5 + (-17%5)) << std::endl;
    std::cout << "-18 = " << (-18/5) << "*5 + " << (-18%5)
              << " = " << ((-18/5)*5 + (-18%5)) << std::endl;
    std::cout << "-19 = " << (-19/5) << "*5 + " << (-19%5)
              << " = " << ((-19/5)*5 + (-19%5)) << std::endl;
    std::cout << "-20 = " << (-20/5) << "*5 + " << (-20%5)
              << " = " << ((-20/5)*5 + (-20%5)) << std::endl;
    std::cout << "-21 = " << (-21/5) << "*5 + " << (-21%5)
              << " = " << ((-21/5)*5 + (-21%5)) << std::endl;
    std::cout << std::endl;

    // The following examples demonstrate the possible
    // remainders when dividing by 4.
    //
    // If 'm' is positive, m%4 is one of
    //
    //     0, 1, 2, 3.
    //
    // If 'm' is negative, m%4 is one of
    //
    //     -3, -2, -1, 0.
    //
    // More generally, if 'n' is positive, the remainder
    // m%n is between 0 and n - 1 when 'm' is positive,
    // and between -(n - 1) and 0 when 'm' is negative.

    std::cout << "Integer remainder" << std::endl;
    std::cout << "-9%4 = " << (-9%4) << std::endl;
    std::cout << "-8%4 = " << (-8%4) << std::endl;
    std::cout << "-7%4 = " << (-7%4) << std::endl;
    std::cout << "-6%4 = " << (-6%4) << std::endl;
    std::cout << "-5%4 = " << (-5%4) << std::endl;
    std::cout << "-4%4 = " << (-4%4) << std::endl;
    std::cout << "-3%4 = " << (-3%4) << std::endl;
    std::cout << "-2%4 = " << (-2%4) << std::endl;
    std::cout << "-1%4 = " << (-1%4) << std::endl;
    std::cout << " 0%4 = " << ( 0%4) << std::endl;
    std::cout << " 1%4 = " << ( 1%4) << std::endl;
    std::cout << " 2%4 = " << ( 2%4) << std::endl;
    std::cout << " 3%4 = " << ( 3%4) << std::endl;
    std::cout << " 4%4 = " << ( 4%4) << std::endl;
    std::cout << " 5%4 = " << ( 5%4) << std::endl;
    std::cout << " 6%4 = " << ( 6%4) << std::endl;
    std::cout << " 7%4 = " << ( 7%4) << std::endl;
    std::cout << " 8%4 = " << ( 8%4) << std::endl;
    std::cout << " 9%4 = " << ( 9%4) << std::endl;
    std::cout << std::endl;

    return 0;
}