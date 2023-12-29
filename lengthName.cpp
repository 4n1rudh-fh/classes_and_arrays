#include <iostream>
#include "lengthName.hpp"
#include "Student.hpp"

void lengthName(const Student* ptr_array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << "Length of name " << i << " is " << (ptr_array[i]->Name).length() << " characters." << std::endl; 
    }
}