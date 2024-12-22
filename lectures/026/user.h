#include <iostream>
#include <istream>
#include <string>

#ifndef USER_H
#define USER_H

class User
{
    static int total_users;
    int status = 1;
    
    public:
        static int get_total_users();
        std::string first_name;
        std::string last_name;
        int get_status();
        void set_status(int status);
        User();
        User(std::string first_name, std::string last_name);
        ~User();
        virtual void output(); // virtual allow us to override the method in the derived class
        friend void output_status(User user);
        friend std::ostream& operator<<(std::ostream& output, const User user);
        friend std::istream& operator>>(std::istream& input, User &user);
};

#endif