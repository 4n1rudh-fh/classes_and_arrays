#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include <string>

class Student
{
    public:
        // Member Variables
        std::string Name;
        int RollNumber;
        std::string Gender;

        // Member Functions
        void StudentInfo();
};

#endif