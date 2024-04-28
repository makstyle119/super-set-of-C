# include <iostream>
# include <cmath>

using std::cout;
using std::cin;
using std::endl;

// double power(double, int) // declare

double power(double base, int exponent) // declare and defining
{
  double result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result *= base;
  }
  return result;
}


int main() // main function
{
  int base, exponent;
  cout << "Enter base: ";
  cin >> base;
  cout << "Enter exponent: ";
  cin >> exponent;
  // double power = pow(base, exponent); // 10^2 - build in function using cmath
  // cout << power << endl;
  double myPower = power(base, exponent);
  cout << myPower << endl;
  return 0;
}

// double power(double base, int exponent) // defining
// {
//   return 0.0;
// }