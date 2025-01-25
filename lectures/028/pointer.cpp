// there is a phase first go with reference and if it's not possible with reference then with pointer
# include <iostream>

int main()
{
    int x = 5;
    // address of operator = & - it will get the memory address of the variable (which might be 12 character long)
    int *y = &x; // y is a pointer to an integer - it stores the address of an integer - x - * is a dereference operator - identifies the variable as a pointer
}