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