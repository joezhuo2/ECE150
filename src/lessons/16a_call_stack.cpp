#include <iostream>

// Function declarations
int main();

// Function declarations

// int main()
//
// @author    Douglas Wilhelm Harder
// @date      2020-09-10
// @version   1.0
//
// @returns    '0' is returned, indicating 'success'
//
// Select 'Visualize Execution'
// You will now see the three variables 'x', 'y', and 'result'
// on the stack. You will now be able to execute one line at
// a time, and with the execution of each line, you will see
// how the values stored on the call stack are changed.
//
// When you select 'Visualize Execution', you will be
// able to select one of four buttons:
//    << First     < Prev     Next >     Last >>
// Selecting 'Next' allows you to execute the next statement
// and see how it changes the values in the right-hand panel.
//
// You are welcomed to make changes to this code, but please
// remember that console input does not work:
//   - That is, you cannot use the 'std::cin >> x;' statement.

int main() {
  double x{ 4.7 };
  std::cout << "x = " << x << std::endl;
  
  double y{ -5.3};
  std::cout << "y = " << y << std::endl;
  
  double result{ x + y };
  std::cout << "x + y = " << result << std::endl;
  result = x - y;
  std::cout << "x - y = " << result << std::endl;
  result = x*y;
  std::cout << " x*y  = " << result << std::endl;
  result = x/y;
  std::cout << " x/y  = " << result << std::endl;

  return 0;
}