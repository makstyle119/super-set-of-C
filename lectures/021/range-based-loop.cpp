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