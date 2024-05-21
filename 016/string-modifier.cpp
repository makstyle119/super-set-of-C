#include <iostream>

int main()
{
  std::string greeting = "Hello";
  std::cout << greeting.length() << " - length" << std::endl; // length of string
  std::cout << greeting.size() << " - size" << std::endl; // length of string - size = length - same thing
  
  greeting += " there"; // string concatenation
  greeting.append(" !"); // string concatenation
  std::cout << greeting << " - concat" << std::endl;
  
  greeting.insert(3, "    "); // insert at the specific index
  std::cout << greeting << " - insert " << std::endl;

  greeting.erase(3, 4); // remove at the specific index by given value
  std::cout << greeting << " - erase " << std::endl;

  greeting.erase(5); // remove - no second argument means remove all characters after the index

  greeting.pop_back(); // pop_back - with no parameter remove last character
  std::cout << greeting << " - pop_back " << std::endl;

  greeting.replace(1, 3, "eaven is beautiful"); // replace - work in specific way - start index, length, new value
  std::cout << greeting << " - replace " << std::endl;

  std::cout << greeting.find("is") << " - find " << std::endl; // return index  of the first character in the string

  std::cout << greeting.substr(8, 2) << " - substr " << std::endl; // extract from index

  std::cout << greeting.find_first_of("aeioou") << " - find_first_of " << std::endl; // find the first match character and return index

  return 0;
}