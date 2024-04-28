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