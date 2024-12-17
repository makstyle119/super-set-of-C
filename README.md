# super-set-of-c/C++

this is my journey to learn and understand C++

## Name:
using this name `super-set-of-c` is only because github doesn't allow me to use `c++` as repo name.😅

## Folder Structure:

```
|- lectures
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
  |- 018
    |- branching.cpp
  |- 019
    |- looping.cpp
  |- 020
    |- collections.cpp
  |- 021
    |- range-based-loop.cpp
  |- 022
    |- files.cpp
  |- 023
    |- swap.cpp
|- projects
  |- 001
    |- guess-the-number.cpp
```
## Code Explaining

- lectures/001/hello-world.cpp
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

- lectures/002/hello-world.cpp
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

- lectures/003/concat-bassic.cpp
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

- lectures/004/input.cpp
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

- lectures/005/func-pow.cpp
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

- lectures/006/void-func.cpp
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

- lectures/007/integer-data-type.cpp
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

- lectures/008/char-data-type.cpp
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

- lectures/009/escape-sequences.cpp
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

- 018/branching.cpp
  - We have two things here:
    - `if`, `else if` and `else`:
      - after `if` (between the parameters) we provide our expression/condition and check if it's true then the statement inside the brackets will run 
      - if you use return in your code it will end at the spot
      - just another `if` condition the difference between using a separate `if` and a `else if` is `else if` will run only if - `if` condition is false and separate `if` is always run - unless if you use return in the `if`
      - `else` will run if - `if` condition doesn't match (`else` is optional)
    - `switch cases`
      - switch same as `if` `else` but only work with integer and use no operators - benefit of using switch case is that 2 cases can't have same value
      - `case` is `if`
      - second `case` is `else if`
      - `default` is `else`
```
#include <string>
#include <iostream>

int main()
{
    // if, else if, and else
    int age = 17;
    if (age < 13) // after "if" (between the parameters) we provide our expression/condition and check if it's true then the statement inside the brackets will run 
    // if you use return in your code it will end at the spot
    {
        std::cout << "You're not a teenager";
    }
    else if (age > 13 && age < 19) // just another "if" condition the difference between using a separate "if" and a "else if" is "else if" will run only if - "if" condition is false and separate "if" is always run - unless if you use return in the "if"
    {
        std::cout << "You're a teenager";
    }
    else // "else" will run if - "if" condition doesn't match ("else" is optional)
    {
        std::cout << "Yes you are old";
    }

    // if with practical example
    std::string answer = "MAK";
    std::string guess;
    std::cout << "Guess My Name!: \n";
    std::cin >> guess;

    if (guess == answer) // two equal is to compare the answer with the value
    {
        std::cout << "You got it right! hurry\n";
    }
    else {
        std::cout << "You lose\n";
    }

    // switch
    int user_age;
    std::cout << "what's your age ? \n";
    std::cin >> user_age;

    switch (user_age) // switch same as "if" "else" but only work with integer and use no operators - benefit of using switch case is that 2 cases can't have same value
    {
    case 13: // "case" is "if"
        std::cout << "You are 13 year old\n";
        break;
    case 14:
    case 15:
        std::cout << "You are 14 or 15 year old\n";
        break;
    case 17: // second "case" is "else if"
        std::cout << "You are 17 year old\n";
        break;
    default: // "default" is "else"
        std::cout << "We don't know this number\n";
        break;
    }

    // switch with practice
    enum season { summer, spring, fall, winter };
    season now  = winter;
    switch (now)
    {
    case summer:
        std::cout << "Try to stay cool!\n";
        break;
    case spring:
        std::cout << "Enjoy!\n";
        break;
    case fall:
        std::cout << "Stay happy!\n";
        break;
    case winter:
        std::cout << "Stay warm!\n";
        break;    
    }
    
    return 0;
}
```

- 019/looping.cpp
  - We have three types of loops here:
    - `for`:
      - after `for` (in parameters) we will put our condition which is 3 part of condition, first is the initialization, second for condition, and third will update our initialize variable 
    - `while`
      - in `while` loop we initialize the value first
      - then we will add our condition between the parameters after `while` keyword
      - and in th last we will update the variable
```
#include <string>
#include <iostream>

int main()
{
    {
        // `for` loop
        for (int i = 0; i < 10; i++) // after `for` (in parameters) we will put our condition which is 3 part of condition, first is the initialization, second for condition, and third will update our initialize variable
        {
            std::cout << i << "\t";
        }
        std::cout << "\n";
    }
    
    {
        // example
        int fact;
        std::cout << "Type any Number which factorial you want to know by using `for` loop:";
        std::cin >> fact;
        int factorial = fact;
        for (int i = factorial - 1; i > 0; i--)
        {
            factorial = factorial * i;
        }

        std::cout << "factorial of " << fact << " is: " << factorial << std::endl;
        std::cout << "\n";
    }

    {
        // `while` loop
        int i = 0; // in `while` loop we initialize the value first
        while (i < 10) // then we will add our condition between the parameters after `while` keyword
        {
            std::cout << i << "\t";
            i++; // and in th last we will update the variable
        }
        std::cout << "\n";
    }
    
    {
        // example
        int fact;
        std::cout << "Type any Number which factorial you want to know by using while `loop`:";
        std::cin >> fact;
        int factorial = fact;
        int i = factorial - 1;
        while(i > 0)
        {
            factorial *= i;
            i--;
        }

        std::cout << "factorial of " << fact << " is: " << factorial << std::endl;
        std::cout << "\n";
    }

    {
        // do while
        std::string guess;
        std::string word = "test";
        do
        {
            std::cout << "Guess the word:";
            std::cin >> guess;
        }
        while(guess != word);

        std::cout << "You guess it correct" << std::endl;
        std::cout << "\n";
    }

    return 0;
}
```

- 020/collections.cpp
  - `arrays`:
    - array have static length and you can't add more then the limit
    - using array in a function can be handy you have to pass size as well to get exact array size
    - `std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');` you can use it to clear cin
  - `vector`:
    - `#include <vector>` you have to include vector first to use them
    - `std::vector<int> data = {1, 2, 3};` that's who you can assign a vector after vector keyword we will define data type and after that vector name and in the last the value
    - `push_back` will add in the last of the vector
    - `pop_back` will remove from the last of the vector 
  - `STL Arrays`
    - `std::array<int, 5> data = {1, 2, 3, 4, 5};` // we will start will std::array - next we will define typeand length and in the last we assign the value
    - `&` // & is use to pass by value not pass by array
```
#include <iostream>
#include <limits>
#include <vector>
#include <array>
#include <tuple>

// Array
// // pointer = a memory address to some area of memory

// void print_array(int array[], int size) // when you pass an array inside a function it will no longer recognized it's size. only for the first value - to fixed it you have to pass size with the array
// {
//     for (int i = 0; i < size; i++)
//     {
//         std::cout << array[i] << '\t';
//     }
//     std::cout << std::endl;
// }

// int main()
// {
//     // arrays
//     const int SIZE = 7;
//     int guesses[SIZE];
//     // int guesses[SIZE] = {1, 11, 23, 2, 3, 9, 91}; // we create a array by providing a data type then name of the array and with the name with put large bracket and provide number (this number is optional if you are going to provide value on the spot) and array start with curly bracket and everything will be inside - array length is static

//     // int size = sizeof(guesses) / sizeof(int);

//     int count = 0;

//     for(int i = 0; i < SIZE; i++)
//     {
//         if(std::cin >> guesses[i])
//         {
//             count++;
//         }
//         else
//         {

//         }
//     }

//     print_array(guesses, count);
//     std::cin.clear();
//     // std::cin.ignore(5, '\n');
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

//     std::string test;
//     std::cin >> test;
//     std::cout << test << std::endl;

//     // std::cout << guesses[3] << std::endl; // you can select specific index by using array name and then passing number between the large bracket
//     // guesses[3] = 99; // you can even update single value from the update as well
//     // std::cout << guesses[3] << std::endl;

//     // int size = sizeof(guesses) / sizeof(int); // sizeOf provide size of the array - formula to get array length

//     // std::cout << size << std::endl;

//     // for (int i = 0; i < size; i++)
//     // {
//     //     std::cout << guesses[i] << std::endl;
//     // }

//     return 0;
// }

// // Vector

// void print_vector(std::vector<int> data)
// {
//     for(int i = 0; i < data.size(); i++)
//     {
//         std::cout << data[i] << "\t"; 
//     }
//     std::cout << "\n";
// }

// // Vector are array with no size limit
// int main()
// {
//     std::vector<int> data = {1, 2, 3};
//     data.push_back(4); // add in the last
//     std::cout << data[data.size() - 1] << std::endl;
//     data.pop_back(); // remove last value
//     std::cout << data.size() - 1 << std::endl;
//     print_vector(data);
// }

// // STL Arrays

// void print_array(std::array<int, 5> &data) // & is use to pass by value not pass by array
// {
//     for (int i = 0; i < data.size(); i++)
//     {
//         std::cout << data[i] << '\t';
//     }
//     std::cout << std::endl;
// }

// int main()
// {
//     std::array<int, 5> data = {1, 2, 3, 4, 5}; // we will start will std::array - next we will define typeand length and in the last we assign the value

//     print_array(data);
// }

// // multi-dimension array
// int main()
// {
//     int grades[][3] = {
//         {1, 2, 3}, 
//         {4, 5, 6}, 
//         {7, 8, 9}
//     };

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             std::cout << grades[i][j] << "\t";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// // multi-dimension vector
// int main()
// {
//     std::vector<std::vector <int>> grades = {
//         {1, 2, 3}, 
//         {4, 5, 6}, 
//         {7, 8, 9}
//     };

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             std::cout << grades[i][j] << "\t";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// handling constant

void print_array(const int data[], int size) // it's okay to send not-constant variable in a constant parameter
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    int data[] = {1, 2, 3};

    print_array(data, 3);

    return 0;
}
```

- 021/range-based-loop.cpp
```
#include <iostream>
#include <vector>
#include <array>

int main()
{
    int data[] = {1, 2, 3, 4, 5};

    for(int n : data) // range base loop - always go for collection
    {
        std::cout << n << "\t";
    }

    // for(int i = 0; i < 5; i++)
    // {
    //     std::cout << data[i] << "\t";
    // }
    std::cout << "\n";
}
```

- 022/files.cpp
  - `#include <fstream>` must include if you are working with files
  - `std::ofstream file;` this is how you create a file object - object name(file can be anything)
  - `file.open("hello.txt");` open a file
  - `file.is_open()` check if file is open or not (not meaning en error - mostly permission error)
  - `file << "hello world";` add anything inside a file
  - `file.close();` close the file (mostly optional)
  - `file.get();` // get file data
  - `getline(file, line);` // another way to get file data
```
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    // std::vector<std::string> names;

    // names.push_back("MAK");
    // names.push_back("Moiz");
    // names.push_back("Maria");

    // std::string filename;
    // std:: cin >> filename;

    // std::ofstream file; // object name(file can be anything)
    // // std::ofstream file ("hello.txt"); // object name(file can be anything)
    // // file.open(filename.c_str()); // to create or get dynamic file name
    // file.open("hello.txt"); // open a file
    // // file.open("hello.txt", std::ios::app); // using this will append and will not overwrite

    // if (file.is_open())
    // {
    //     for (std::string name: names)
    //     {
    //         file << name << std::endl;
    //     }

    //     // file << "hello world";

    //     file.close(); // close the file
    // } 

    std::ifstream file ("hello.txt");

    // char temp = file.get(); // get file data
    std::string line;

    getline(file, line); // another way to get file data

    // std::cout << temp << std::endl;
    std::cout << line << std::endl;

    // std::vector<std::string> names;
    // std::vector<char> names;

    // std::string input;
    // char input;
    // while (file >> input) // another way to get file data
    // {
    //     names.push_back(input);
    // }

    // for (std::string name : names)
    // for (char name : names)
    // {
    //     std::cout << name << std::endl;
    // }    

    return 0;
}
```

- 022/files.cpp
  - this `&` help to pass by reference
```
#include <iostream>

void swap(int &a, int &b) // this & help to pass by reference
{
    int temp = a;
    a = b; 
    b = temp;

    std::cout << "value of v: " << a << ", and value of b is: " <<  b << std::endl;
} 

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);

    std::cout << "value of v: " << a << ", and value of b is: " <<  b << std::endl;

    return 0;
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

## Control Flow
- the flow or way in which program statement will be executed
- there are 2 types of control flow:
  - Branching
  - Looping

- ### Branching
  - in the branching you do different condition ( single run ). 
  - we have here:
    - if, else
    - switch

- ### Looping
  - in the Looping it will do same but repeat itself. 
  - we have here:
    - while
    - for
    - do while
  - there is a simple way to remember loop which is
    - I = Initialize
    - C = Condition
    - U = Update

## Array VS Vector VS STL Array
- `Array`
  - you can't reassign an array
  - not recommended
  - pass by pointer
  - don't know their size
  - size = static
- `Vector`
  - you can reassign a vector
  - more recommended
  - pass by value (default)
  - know their size - .size()
  - size = dynamic
- `STL Array`
  - you can reassign a stl array
  - better then array
  - pass by value (default) .size
  - know their size - .size()
  - size = dynamic

## Logical Operators
- `==` = for comparison
- `&&` = and comparison
- `||` = or comparison
- `!` = not comparison
- `<` = less then comparison
- `<=` = less then and equal comparison
- `>` = greater then comparison
- `>=` = greater then and equal comparison
- `?` = (in ternary operator) if
- `:` = (in ternary operator) else

## Keywords
- `cout` = console out
- `cin` = console in
- `endl` = end line just like \n
- `sizeof` = return the size of the array
- `std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');` = you can use it to clear cin
- `-std=c++11` = use when you want to use c++11
- `size()` = use in vector to identify their length

## Style Guide
- `//` this is a single line comment = use for single line comments
- `/*
    this is a multi-line
    comment
  */` = use for multi line comments
- C++ is caseSensitive, means name and Name are two other things - `kabab case` is recommended in C++, eg: my_app.
- C++ ignore `white spaces` so you can hit the enter button as much as you want - ( not recommended )
- functions should call over logic
