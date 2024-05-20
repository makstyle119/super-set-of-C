#include <iostream>
#include <string>

// String Class is superior to C-String
int main()
{
  std::string greeting = "hello";
  std::string complete_greeting = "there";
  complete_greeting += "!";
  std::cout << complete_greeting << std::endl;
  std::cout << greeting.length() << std::endl;

  char name[] = "MAK"; // array of characters
}