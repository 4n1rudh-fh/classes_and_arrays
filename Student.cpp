#include <iostream>
#include "Student.hpp"

void Student::StudentInfo()
{
    // Name = "Haha! Got you!";
    std::cout << "Student Name          : " << Name << std::endl;
    std::cout << "Student Roll Number   : " << RollNumber << std::endl;
    std::cout << "Gender                : " << Gender << std::endl;
}