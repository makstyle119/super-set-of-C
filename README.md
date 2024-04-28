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
```
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
```

## Keywords
- cout = console out
- cin = console in
- endl = end line just like \n

## Style Guide
- // this is a single line comment = use for single line comments
- /*
    this is a multi-line
    comment
  */ = use for multi line comments
- C++ is caseSensitive, means name and Name are two other things - kabab case is recommended in C++, eg: my_app.
- C++ ignore white spaces so you can hit the enter button as much as you want - ( not recommended )
