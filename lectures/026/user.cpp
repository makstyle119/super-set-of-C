#include <iostream>
#include <istream>
#include "user.h"

        int User::get_total_users() // static member function - static method can only use static member variable
        {
            return total_users;
        }

        int User::get_status() // this is a getter - method are ideal for class - (use to access private member variable)
        {
            return status;
        }
        void User::set_status(int status) // this is a setter - (use to access private member variable)
        {
            if (status >= 0)
                this->status = status;
            else
                this->status = 0;
        }
        User::User() // constructor - special method - replace default constructor
        {
            total_users++;
            std::cout << "Constructor\n";
        }
        User::User(std::string first_name, std::string last_name) // constructor - special method
        {
            total_users++;
            this->first_name = first_name;
            this->last_name = last_name;

            std::cout << "Constructor\n";
        }
        User::~User() // destructor - special method
        {
            total_users--;
            std::cout << "Destructor\n";
        }
        void output_status(User user); // friend function - access private member variable
        std::ostream& operator<<(std::ostream& output, const User user);
        std::istream& operator>>(std::istream& input, User &user);

int User::total_users = 0; // static member variable - static member variable can only be initialize outside the class

void output_status(User user) // friend function - access private member variable
{
    std::cout << "Status: " << user.status << std::endl;
}

std::ostream& operator<<(std::ostream& output, const User user) // operator overloading - friend function - access public and private member variable
{
    output << "First name: " << user.first_name << std::endl;
    output << "Last name: " << user.last_name << std::endl;
    output << "Status: " << user.status << std::endl;
    return output;
};

std::istream& operator>>(std::istream& input, User &user) // operator overloading - access public member variable
{
    std::cout << "Enter first name and last name: ";
    input >> user.first_name >> user.last_name;
    return input;
};