#include <iostream>
#include <istream>
#include "user.h"

int main()
{
    User user1; // object of class User
    user1.first_name = "Moiz"; // access member variable using dot operator
    user1.last_name = "Ali";
    std::cout << "First name: " << user1.first_name << std::endl;
    std::cout << "last name: " << user1.last_name << std::endl;
    std::cout << "status: " << user1.get_status() << std::endl; // access member function using dot operator
    std::cout << "Total users: " << User::get_total_users() << std::endl; // you will access static member function using class name

    std::cout << "-------------------\n";

    User user2("Syed", "Maria"); // assign value to member variable using constructor
    std::cout << "First name: " << user2.first_name << std::endl;
    std::cout << "last name: " << user2.last_name << std::endl;
    std::cout << "status: " << user2.get_status() << std::endl; // access member function using dot operator
    std::cout << "Total users: " << User::get_total_users() << std::endl; // you will access static member function using class name

    std::cout << "-------------------\n";

    User user3; // object of class User
    user3.first_name = "MAK"; // access member variable using dot operator
    user3.last_name = "Style110";

    std::cout << user3 << std::endl; // operator overloading

    std::cout << "-------------------\n";

    User user4; // object of class User
    std::cin >> user4; // operator overloading
    output_status(user4); // friend function
    std::cout << user4 << std::endl; // operator overloading

    return 0;
}