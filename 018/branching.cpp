#include <string>
#include <iostream>

int main()
{
    // if, else if, and else
    int age = 17;
    if (age < 13) // after "if" (between the parameters) we provide our expression/condition and check if it's true then the statement inside the brackets will run 
    // if you use return in your code it will end at the spot
    {
        std::cout << "You're not a teenager";
    }
    else if (age > 13 && age < 19) // just another "if" condition the difference between using a separate "if" and a "else if" is "else if" will run only if - "if" condition is false and separate "if" is always run - unless if you use return in the "if"
    {
        std::cout << "You're a teenager";
    }
    else // "else" will run if - "if" condition doesn't match ("else" is optional)
    {
        std::cout << "Yes you are old";
    }

    // if with practical example
    std::string answer = "MAK";
    std::string guess;
    std::cout << "Guess My Name!: \n";
    std::cin >> guess;

    if (guess == answer) // two equal is to compare the answer with the value
    {
        std::cout << "You got it right! hurry\n";
    }
    else {
        std::cout << "You lose\n";
    }

    // switch
    int user_age;
    std::cout << "what's your age ? \n";
    std::cin >> user_age;

    switch (user_age) // switch same as "if" "else" but only work with integer and use no operators - benefit of using switch case is that 2 cases can't have same value
    {
    case 13: // "case" is "if"
        std::cout << "You are 13 year old\n";
        break;
    case 14:
    case 15:
        std::cout << "You are 14 or 15 year old\n";
        break;
    case 17: // second "case" is "else if"
        std::cout << "You are 17 year old\n";
        break;
    default: // "default" is "else"
        std::cout << "We don't know this number\n";
        break;
    }

    // switch with practice
    enum season { summer, spring, fall, winter };
    season now  = winter;
    switch (now)
    {
    case summer:
        std::cout << "Try to stay cool!\n";
        break;
    case spring:
        std::cout << "Enjoy!\n";
        break;
    case fall:
        std::cout << "Stay happy!\n";
        break;
    case winter:
        std::cout << "Stay warm!\n";
        break;    
    }
    
    return 0;
}