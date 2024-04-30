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
