#include <iostream>

class User // class is a blueprint for object
{
    static int total_users; // static member variable
    int status = 1; // default is private - private member variable
    
    public:
        static int get_total_users() // static member function - static method can only use static member variable
        {
            return total_users;
        }
        std::string first_name; // member variables
        std::string last_name;
        int get_status() // this is a getter - method are ideal for class - (use to access private member variable)
        {
            return status;
        }
        void set_status(int status) // this is a setter - (use to access private member variable)
        {
            if (status >= 0)
                this->status = status;
            else
                this->status = 0;
        }
        User() // constructor - special method - replace default constructor
        {
            total_users++;
            std::cout << "Constructor\n";
        }
        User(std::string first_name, std::string last_name) // constructor - special method
        {
            total_users++;
            this->first_name = first_name;
            this->last_name = last_name;

            std::cout << "Constructor\n";
        }
        ~User() // destructor - special method
        {
            total_users--;
            std::cout << "Destructor\n";
        }
};

int User::total_users = 0; // static member variable - static member variable can only be initialize outside the class

int main()
{
    // User user; // object of class User
    User user("Moiz", "Ali"); // assign value to member variable using constructor
    // user.first_name = "Moiz"; // access member variable using dot operator
    // user.last_name = "Ali";
    
    std::cout << "First name: " << user.first_name << std::endl;
    std::cout << "status: " << user.get_status() << std::endl; // access member function using dot operator
    std::cout << "Total users: " << User::get_total_users() << std::endl; // you will access static member function using class name
    return 0;
}