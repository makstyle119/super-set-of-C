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