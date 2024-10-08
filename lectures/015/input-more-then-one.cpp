#include <iostream>
#include <string>

// String Class is superior to C-String
int main()
{
  std::string greeting;
  getline(std::cin, greeting); // for sting
  std::cout << greeting << std::endl;
  // std::cin.getline(); // for number
  return 0;
}