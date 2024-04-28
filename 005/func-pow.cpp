# include <iostream>
# include <cmath>

using std::cout;
using std::cin;

int main() // main function
{
  int base, exponent;
  cout << "Enter base: ";
  cin >> base;
  cout << "Enter exponent: ";
  cin >> exponent;
  double power = pow(base, exponent); // 10^2 - build in function using cmath
  cout << power << endl;
  return 0;
}