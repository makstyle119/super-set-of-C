#include <iostream>

// void swap(int &a, int &b) // this & help to pass by reference
// {
//     int temp = a;
//     a = b; 
//     b = temp;

//     std::cout << "value of v: " << a << ", and value of b is: " <<  b << std::endl;
// } 

// int main()
// {
//     int a = 10;
//     int b = 20;

//     swap(a, b);

//     std::cout << "value of v: " << a << ", and value of b is: " <<  b << std::endl;

//     return 0;
// }

template <typename T> // this is a template - it can be used for any data type

void swap(T &a, T &b) // this & help to pass by reference
{
    T temp = a;
    a = b; 
    b = temp;
}

template <typename T>
void swap(T a[], T b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

// removed the below code and used template instead
// void swap(std::string &a, std::string &b) // this & help to pass by reference
// {
//     std::string temp = a;
//     a = b; 
//     b = temp;
// }

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);

    std::cout << "(integer) value of v: " << a << ", and value of b is: " <<  b << std::endl;

    std::string c = "MAK";
    std::string d = "Maria";

    swap(c, d);

    std::cout << "(String) value of c: " << c << ", and value of d is: " <<  d << std::endl;

    int const SIZE = 6;
    int nines[] = {9, 9, 9, 9, 9, 9};
    int once[] = {1, 1, 1, 1, 1, 1};
    
    swap(nines, once , SIZE);
    
    for (int i = 0; i < 6; i++)
    {
        std::cout << "nines array - index: " << i << " value: " << nines[i] << " and once array - same index and value is: " << once[i] << std::endl;
    }

    return 0;
}