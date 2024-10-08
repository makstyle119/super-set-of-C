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
