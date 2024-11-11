#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>
#include <tuple>

// void print_array(int array[], int count)
// {
//     for (int i = 0; i < count; i++)
//     {
//         std::cout << array[i] << '\t';
//     }
//     std::cout << std::endl;
// }

// void print_vector(std::vector<int> vector)
// {
//     for (int i = 0; i < vector.size(); i++)
//     {
//         std::cout << vector[i] << '\t';
//     }
//     std::cout << std::endl;
// }

void print_array(std::array<int, 251> array, int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << array[i] << '\t';
    }
    std::cout << std::endl;
}

void play_game()
{
    std::array <int, 251> guesses;
    int count = 0;
    // int guesses[250];
    // int guess_count = 0;

    int random = rand() % 251;
    std::cout << "guess the number:" << std::endl;
    while(true)
    {
        int guess;
        std::cin >> guess;

        guesses[count++] = guess; 
        // guesses[guess_count++] = guess;
        // guesses.push_back(guess);

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
    print_array(guesses, count);
    // print_vector(guesses);
    // print_array(guesses, guess_count);
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