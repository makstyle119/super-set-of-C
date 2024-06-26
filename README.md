# super-set-of-c/C++

this is my journey to learn and understand C++

## Name:
using this name `super-set-of-c` is only because github doesn't allow me to use `c++` as repo name.😅

## Folder Structure:

```
|- 001
  |- hello-world.cpp
|- 002
  |- variables-basic.cpp
|- 003
  |- concat-bassic.cpp
|- 004
  |- input.cpp
|- 005
  |- func-pow.cpp
|- 006
  |- void-func.cpp
|- 007
  |- integer-data-type.cpp
|- 008
  |- char-data-type.cpp
|- 009
  |- escape-sequences.cpp
|- 010
  |- bool-data-type.cpp
|- 011
  |- floating-point-data-type.cpp
|- 012
  |- const-macro-enum.cpp
|- 013
  |- numeric-function.cpp
|- 014
  |- string-class-c-string.cpp
|- 015
  |- input-more-then-one.cpp
|- 016
  |- string-modifier.cpp
|- 017
  |- literal-constant.cpp
```
## Code Explaining

- 001/hello-world.cpp
```
# include <iostream> // C++ standard library which provide input and output method. eg: std::cout<<"Hello Wrold">>

// using namespace std; // using standard namespace
using std::cout; // declare count from standard library 

int main() // main function - int is the return type of function
{
  cout << "Hello, World\n"; // hello, World - count ( use to print )
  printf("Hello, World wih printf\n"); // printf is come fro C and work in C++ as well - use to print same as cout
  return 0; // return 0 that means no error.
}
```

- 002/hello-world.cpp
```
# include <iostream>

using std::cout;

int main() // main function
{
  int slices = 5; // declare and initialize - we create a variable name slices and it's type is integer and it's value is 5 - int = int, name = slices, value = 5
  // we can do declaration and initialization separately
  int new_slice; // we only declare here
  new_slice = 6; // we initialize here
  cout << slices;
  return 0;
}
```

- 003/concat-bassic.cpp
```
# include <iostream>

using std::cout;
using std::endl; // endl is use to break line just like '\n'

int main() // main function
{
  int slices = 5;
  cout << "You Have " << slices << " Slices Of Pizza." << endl; // use << to concat
  return 0;
}
```

- 004/input.cpp
```
# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() // main function
{
  int slices;
  cout << "How many slices of pizza do you have: ";
  cin >> slices; // cin use to get input from the user.
  cout << "You Have " << slices << " Slices Of Pizza." << endl;
  return 0;
}
```

- 005/func-pow.cpp
  - you can `declare` and then `define function` at once or just `declare` on top and then `define` in both but make sure you declare them before calling them.
```
# include <iostream>

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
```

- 006/void-func.cpp
  - `void function` are those which doesn't `return` anything.
```
# include <iostream>
# include <cmath>

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
```

- 007/integer-data-type.cpp
  - there are `8 type of integer`
    - short # `16 bit` Min.
    - int # `16 bit` Min.
    - long # `32 bit` Min.
    - long long # `64 bit` Min.
    - unsigned short # `16 bit` Min - only positive.
    - int # `16 bit` Min - only positive.
    - long # `32 bit` Min - only positive.
    - long long # `64 bit` Min - only positive.
```
#include <iostream>
#include <climits>

using std::cout;

int main()
{
  short a; // min: 16 bit
  int b; // min: 16 bit
  long c; // min: 32 bit
  long long d; // min: 64 bit
  // short <= int <= long <= long long
  unsigned short aa;
  unsigned int bb;
  unsigned long cc;
  unsigned long long dd;
}
```

- 008/char-data-type.cpp
  - there are `2 type of char`
    - signed char # `8 bit` Min.
    - unsigned char # `8 bit` Min - only positive.
```
#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main()
{
  char A = 'A'; // for char you can only use '' - char is 8 bit
  signed char B = 66; // can upto 128
  unsigned char C = 'C'; // can upto 255
  cout << int(A) << endl; // you can typecast char to int by using int(x)
  cout << B << endl; // chat by default convert value of B into char table: 66 = B 
  cout << C << endl;
}
```

- 009/escape-sequences.cpp
```
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  cout << "hello\tworld" << endl; // \t Insert a tab in the text at this point.
  cout << "hello\bworld" << endl; // \b Insert a backspace in the text at this point.
  cout << "hello\nworld" << endl; // \n Insert a newline in the text at this point.
  cout << "hello\rworld" << endl; // \r Insert a carriage return in the text at this point.
  cout << "hello\fworld" << endl; // \f Insert a formfeed in the text at this point. 
  cout << "hello\'world" << endl; // \' Insert a single quote character in the text at this point.
  cout << "hello\"world" << endl; // \" Insert a double quote character in the text at this point.
  cout << "hello\\world" << endl; // \\ Insert a backslash character in the text at this point.
  cout << "hello\aworld" << endl; // \a create a beep sound on run.
}
```

- 010/bool-data-type.cpp
  - there are `2 type of bool in almost all language unless you come from DreamBerd`
    - `True` != `0` // anything which is not `0`.
    - `False` = `0` // only `0`.
```
#include <iostream>

using std::cout;
using std::endl;
using std::boolalpha; // to print true and false rather then 0 and 1

int main()
{
  bool anime_is_life = 1; // 0 = false else true
  cout << boolalpha << anime_is_life << endl;
}
```

- 011/floating-point-data-type.cpp
  - there are `3 type of floating point`
    - `float` // trust worthy upto 6 digits.
    - `double` // 77000 = 7.7 * 10^4 = 7.7E4 (scientific notation) - trust worthy upto 15 digits.
    - `long double` // trust worthy upto 18 digits
```
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  float a; // trust worthy upto 6 digits.
  double b = 7.7E4; // 77000 = 7.7 * 10^4 = 7.7E4 (scientific notation) - trust worthy upto 15 digits.
  long double c; // trust worthy upto 18 digits.
  cout << a << endl << b << endl << c << endl;
}
```

- 011/const-macro-enum.cpp
  - there are `3 ways to make const`
    - `const`
    - `enum`
    - `define`
```
#include <iostream>
#define X 10 // macro - const - define - you can't redeclare it - use in C

using std::cout;
using std::endl;

int main()
{
  const int x = 5; // const is read-only - you can't redeclare it 
  enum { y = 100 }; // enum - define - you can't redeclare it - same as macro/const
  cout << x << endl;
}
```

- 013/numeric-function.cpp
```
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
```

- 014/string-class-c-string.cpp
  - there are `2 ways to declare string`
    - `string` - use in C++
    - `char` - come from C
```
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

  char name[] = "MAK"; // array of characters - you can't resign it 
}
```

- 015/input-more-then-one.cpp
  - there are `2 ways to get input which is more then one word`
    - `getline` - use for string
    - `cin.getline()` - use for number
```
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
```

- 016/string-modifier.cpp
  - there are a lot of function we can use in string few are mention bellow:
    - `length()` - get the length of the string
    - `size()` - get the length of the string - length = size, same thing
    - `+=` - append into the string
    - `insert(0, value)` - insert at a specific index - first `index`, second `value`
    - `erase(0, value)` - remove at a specific index - first `index`, second `length` how much you want to remove - if second argument is not provided remove all character till the end
    - `pop_back()` - if no argument remove last character
    - `replace(0, 4, "test")` - first `index`, second `length`, third `value`
    - `find("test")` - return the `index` of first character of the found word
    - `substr(8, 2)` - first is `index` and second is `length`, return the between character from the index to the length
    - `find_first_of('abcd')` - return the `index` of first found character from the string in parameter
```
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

  std::cout << greeting.find_first_of("aeioou") << " - substr " << std::endl; // find the first match character and return index

  return 0;
}
```

- 017/literal-constant.cpp
  - there are a few more constant in c++:
    - `U/L/LL/etc` - you can assign a data type by just adding this in the last.
      - `U` unassign
      - `L` Long
      - `LL` Long Long
      - `0x` hexadecimal
      - `0` octal decimal
    - `hex` - you can use hex as a pipe to convert number into hexadecimal
    - `oct` - you can use oct as a pipe to convert number into octal decimal
```
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
  std::cout std::hex << hex_number_print << std::endl;

  int oct_number_print = 30; //  0 represent octal_decimal
  std::cout << std::oct << number << std::endl;
}
```

## Variable
- first you define the type of variable
- second you give it a name:
- third you give a value:
  - `int age = 22;`
- you can just declare a variable and assign it like above or declare first and assign after that:
  - `int year;`
  - `year = 2024;`
- you can just declare a const variable in different ways:
  - `#define X 10`
  - `const y = 20`
  - `enum { z = 30 }`

## Keywords
- `cout` = console out
- `cin` = console in
- `endl` = end line just like \n

## Style Guide
- `//` this is a single line comment = use for single line comments
- `/*
    this is a multi-line
    comment
  */` = use for multi line comments
- C++ is caseSensitive, means name and Name are two other things - `kabab case` is recommended in C++, eg: my_app.
- C++ ignore `white spaces` so you can hit the enter button as much as you want - ( not recommended )
