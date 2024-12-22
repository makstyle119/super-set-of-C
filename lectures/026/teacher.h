#ifndef TEACHER_H
#define TEACHER_H

#include "user.h"

#include <vector>
#include <string>
#include <iostream>

class Teacher: public User
{
    public:
        std::vector<std::string> classes_teaching;
        void output();
};

#endif