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
