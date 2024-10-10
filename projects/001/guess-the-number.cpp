#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void play_game()
{
    int random = rand() % 251;
    std::cout << "guess the number:" << std::endl;
    while(true)
    {
        int guess;
        std::cin >> guess;
        if (guess == random)
        {
            std::cout << "you win\n";
            break;
        }
        else if (guess < random)
        {
            std::cout << "guess is too low\n";
        }
        else
        {
            std::cout << "guess is too high\n";
        }
    }
}

int main()
{
    srand(time(NULL));
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
                play_game();
                break;
        }
    }
    while (choice != 0);
}