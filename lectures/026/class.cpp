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
        friend void output_status(User user); // friend function - access private member variable
        friend std::ostream& operator<<(std::ostream& output, const User user);
};

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