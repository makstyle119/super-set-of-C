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
  - there are `3 ways to make const`
    - `const`
    - `enum`
    - `define`
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
