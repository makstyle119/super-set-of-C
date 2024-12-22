#include "teacher.h"

        void Teacher::output()
        {
            std::cout << "First name: " << first_name << std::endl;
            std::cout << "Last name: " << last_name << std::endl;
            std::cout << "Status: " << get_status() << std::endl;
            std::cout << "Classes teaching: ---";
            std::cout << std::endl;
        }