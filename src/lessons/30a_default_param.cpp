#include <iostream>

/***************************************************
 * Default arguments
 *
 * A function parameter may be given a default
 * argument in the function declaration.
 *
 * For example,
 *
 *     int add( int a = 0, int b = 0 );
 *
 * allows all of the following function calls:
 *
 *     add()
 *     add( 2 )
 *     add( 2, 3 )
 *
 * If an argument is omitted, the corresponding
 * default argument is used.
 *
 *
 * ADDITION
 *
 * For addition, a natural default argument is 0
 * because 0 is the additive identity:
 *
 *     x + 0 == x.
 *
 * Thus, if add() can take up to five arguments,
 * any missing arguments can be replaced by 0.
 *
 *
 * MULTIPLICATION
 *
 * For multiplication, a natural default argument
 * is 1 because 1 is the multiplicative identity:
 *
 *     x*1 == x.
 *
 * Thus, if mul() can take up to five arguments,
 * any missing arguments can be replaced by 1.
 *
 *
 * An important rule is that once a parameter has a
 * default argument, all parameters that follow it
 * must also have default arguments.
 ***************************************************/

// Function declarations
int main();

int add( int a = 0, int b = 0, int c = 0,
         int d = 0, int e = 0 );

int mul( int a = 1, int b = 1, int c = 1,
         int d = 1, int e = 1 );

// Function definitions
int main() {
    // Missing arguments are replaced by 0.
    std::cout << add() << std::endl;
    std::cout << add( 2 ) << std::endl;
    std::cout << add( 2, 3 ) << std::endl;
    std::cout << add( 2, 3, 4 ) << std::endl;
    std::cout << add( 2, 3, 4, 5 ) << std::endl;
    std::cout << add( 2, 3, 4, 5, 6 ) << std::endl;

    // This would result in a compile error:
    //   - add() takes at most five arguments.
    //
    // std::cout << add( 2, 3, 4, 5, 6, 7 )
    //           << std::endl;

    std::cout << std::endl;

    // Missing arguments are replaced by 1.
    std::cout << mul() << std::endl;
    std::cout << mul( 2 ) << std::endl;
    std::cout << mul( 2, 3 ) << std::endl;
    std::cout << mul( 2, 3, 4 ) << std::endl;
    std::cout << mul( 2, 3, 4, 5 ) << std::endl;
    std::cout << mul( 2, 3, 4, 5, 6 ) << std::endl;

    // This would result in a compile error:
    //   - mul() takes at most five arguments.
    //
    // std::cout << mul( 2, 3, 4, 5, 6, 7 )
    //           << std::endl;

    return 0;
}

/***************************************************
 * add
 *
 * Return the sum of the five parameters.
 *
 * The default arguments appear in the function
 * declaration above. They are not repeated in the
 * function definition.
 ***************************************************/
int add( int a, int b, int c, int d, int e ) {
    return a + b + c + d + e;
}

/***************************************************
 * mul
 *
 * Return the product of the five parameters.
 ***************************************************/
int mul( int a, int b, int c, int d, int e ) {
    return a*b*c*d*e;
}