#include <iostream>
#include <limits>

// pointer = a memory address to some area of memory

void print_array(int array[], int size) // when you pass an array inside a function it will no longer recognized it's size. only for the first value - to fixed it you have to pass size with the array
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << '\t';
    }
    std::cout << std::endl;
}

int main()
{
    // arrays
    const int SIZE = 7;
    int guesses[SIZE];
    // int guesses[SIZE] = {1, 11, 23, 2, 3, 9, 91}; // we create a array by providing a data type then name of the array and with the name with put large bracket and provide number (this number is optional if you are going to provide value on the spot) and array start with curly bracket and everything will be inside - array length is static

    // int size = sizeof(guesses) / sizeof(int);

    int count = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(std::cin >> guesses[i])
        {
            count++;
        }
        else
        {

        }
    }

    print_array(guesses, count);
    std::cin.clear();
    // std::cin.ignore(5, '\n');
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;
    std::cin >> test;
    std::cout << test << std::endl;

    // std::cout << guesses[3] << std::endl; // you can select specific index by using array name and then passing number between the large bracket
    // guesses[3] = 99; // you can even update single value from the update as well
    // std::cout << guesses[3] << std::endl;

    // int size = sizeof(guesses) / sizeof(int); // sizeOf provide size of the array - formula to get array length

    // std::cout << size << std::endl;

    // for (int i = 0; i < size; i++)
    // {
    //     std::cout << guesses[i] << std::endl;
    // }

    return 0;
}