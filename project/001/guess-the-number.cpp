#include <string>
#include <iostream>

int main()
{

    int choice;
    do
    {
        std::cout << "0.Quit" << std::endl << "1.Play Game" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
            case 0:
                std::cout << "Bye." << std::endl;
                return 0;
            case 1:
                std::cout << "Welcome!" << std::endl;
                break;
        }
    }
    while (choice != 0);
}