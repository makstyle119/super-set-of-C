# include <iostream>

using std::cout;
using std::cin;
using std::endl;

double power(double base, int exponent) // declare and defining
{
  double result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result *= base;
  }
  return result;
}

void print_pow(double base, int exponent) // void means no return value
{
  double myPower = power(base, exponent);
  cout << base << " raise to the " << exponent << " power is " << myPower << "." << endl;
}

int main() // main function
{
  int base, exponent;
  cout << "Enter base: ";
  cin >> base;
  cout << "Enter exponent: ";
  cin >> exponent;
  print_pow(base, exponent);
  return 0;
}
