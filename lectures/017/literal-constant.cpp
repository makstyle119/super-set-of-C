#include <iostream>
#include <string>

int main()
{
  auto x = 5U; // unsigned int - it you want to use it you should g++ file-path -std=c++17
  std::cout << x << std::endl;

  int hex_number = 0x5; //  0x represent hexadecimal
  std::cout << hex_number << std::endl;

  int oct_number = 010; //  0 represent octal_decimal
  std::cout << oct_number << std::endl;

  int hex_number_print = 40; //
  std::cout << std::hex << hex_number_print << std::endl;

  int oct_number_print = 30; //  0 represent octal_decimal
  std::cout << std::oct << oct_number_print << std::endl;
}