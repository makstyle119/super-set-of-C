#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

// Function to read the best score from the file.
int read_best_score(const std::string& filename)
{
    std::ifstream input(filename);
    if (!input.is_open())
    {
        std::cerr << "Unable to read file\n";
        return -1; // Indicates an error
    }

    int best_score;
    input >> best_score;
    return best_score;
}

// Function to write the best score to the file.
void write_best_score(const std::string& filename, int best_score)
{
    std::ofstream output(filename);
    if (!output.is_open())
    {
        std::cerr << "Unable to write to file\n";
        return;
    }
    output << best_score;
}

// Function to update the best score if the current score is better.
void handle_best_score(const std::vector<int>& guesses)
{
    const std::string filename = "best_score.txt";
    int best_score = read_best_score(filename);

    // If there was an error reading the best score, don't proceed
    if (best_score == -1)
        return;

    int current_score = guesses.size();
    int new_best_score = (current_score < best_score || best_score == -1) ? current_score : best_score;

    write_best_score(filename, new_best_score);
}

// Function to print a vector.
void print_vector(const std::vector<int>& vec)
{
    for (int num : vec)
    {
        std::cout << num << '\t';
    }
    std::cout << std::endl;
}

// Function to play the game.
void play_game()
{
    std::vector<int> guesses;
    int random_number = rand() % 251; // Random number between 0 and 250

    std::cout << "Guess the number between 0 and 250:" << std::endl;

    while (true)
    {
        int guess;
        std::cin >> guess;

        guesses.push_back(guess);

        if (guess == random_number)
        {
            std::cout << "You win!\n";
            break;
        }
        else if (guess < random_number)
        {
            std::cout << "Your guess is too low.\n";
        }
        else
        {
            std::cout << "Your guess is too high.\n";
        }
    }

    handle_best_score(guesses);
    print_vector(guesses);
}

// Main function for the game menu and flow.
int main()
{
    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator

    int choice;
    do
    {
        std::cout << "0. Quit\n1. Play Game\n";
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "Bye.\n";
            break;
        case 1:
            play_game();
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 0);

    return 0;
}
