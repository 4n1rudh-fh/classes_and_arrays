#include <iostream>
#include "Student.hpp"
#include "lengthName.hpp"

int main(int argc, char* argv[])
{
    const int array_size = 3;
    Student class_10_students[array_size];
    const Student* ptr_students[array_size];

    for(int i = 0; i < 3; i++)
    {
        std::cout << "Enter First Name : ";
        std::cin >> class_10_students[i].Name;
        
        std::cout << "Enter Roll Number : ";
        std::cin >> class_10_students[i].RollNumber;

        std::cout << "Enter Gender : ";
        std::cin >> class_10_students[i].Gender;
    }

    for(int i = 0; i < array_size; i++)
    {
        ptr_students[i] = &(class_10_students[i]);
    }

    // Printing names from member functions
    for(int i = 0; i < array_size; i++)
    {
        ptr_students[i]->StudentInfo();
    }

    lengthName(ptr_students, array_size);
    
    return EXIT_SUCCESS;
}