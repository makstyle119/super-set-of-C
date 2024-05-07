#include <iostream>
#include <cmath>

int main()
{
  std::cout << sqrt(9) << std::endl; // sqrt is square root - 3
  std::cout << remainder(9, 3) << std::endl; // remainder is mod with floating number - 0
  // std::cout << 10 % 3.25 << std::endl; // not allowed because of double
  std::cout << 10 % 3 << std::endl; // allowed - work with int - 1
  std::cout << fmax(10, 3) << std::endl; // return high in the list - 10
  std::cout << fmin(9, 3) << std::endl; // return low in the list - 3
  std::cout << ceil(3.24) << std::endl; // do ceil - 4 - ceil always go to up
  std::cout << floor(3.24) << std::endl; // do floor - 3 - always go to down
  std::cout << trunc(-3.9) << std::endl; // do trunc - same as floor until you go on negative - in negative it go for low point
  std::cout << round(-3.9) << std::endl; // do round - 4 - 0.01-0.49 => 0 || 0.51-0.99 => 1
  
}