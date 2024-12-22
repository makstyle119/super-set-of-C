#include <iostream>

struct User  // same as class but default access specifier is public
{
    std::string first_name; // member variables
    std::string last_name;
    int get_status() // method are not ideal for struct
    {
        return status;
    }
    private:
        int status = 1;
};

int main()
{
    User user; // just like object creation in class
    user.first_name = "John"; // access member variable using dot operator
    user.last_name = "Doe";
    
    std::cout << "First name: " << user.first_name << std::endl;
    std::cout << "status: " << user.get_status() << std::endl; // access member function using dot operator
    return 0;
}