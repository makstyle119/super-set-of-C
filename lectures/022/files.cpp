#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    // std::vector<std::string> names;

    // names.push_back("MAK");
    // names.push_back("Moiz");
    // names.push_back("Maria");

    // std::string filename;
    // std:: cin >> filename;

    // std::ofstream file; // object name(file can be anything)
    // // std::ofstream file ("hello.txt"); // object name(file can be anything)
    // // file.open(filename.c_str()); // to create or get dynamic file name
    // file.open("hello.txt"); // open a file
    // // file.open("hello.txt", std::ios::app); // using this will append and will not overwrite

    // if (file.is_open())
    // {
    //     for (std::string name: names)
    //     {
    //         file << name << std::endl;
    //     }

    //     // file << "hello world";

    //     file.close(); // close the file
    // } 

    std::ifstream file ("hello.txt");

    // char temp = file.get(); // get file data
    std::string line;

    getline(file, line); // another way to get file data

    // std::cout << temp << std::endl;
    std::cout << line << std::endl;

    // std::vector<std::string> names;
    // std::vector<char> names;

    // std::string input;
    // char input;
    // while (file >> input) // another way to get file data
    // {
    //     names.push_back(input);
    // }

    // for (std::string name : names)
    // for (char name : names)
    // {
    //     std::cout << name << std::endl;
    // }    

    return 0;
}