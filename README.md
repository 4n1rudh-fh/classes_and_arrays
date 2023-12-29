# Description
- Not a computer science student here. Just posted this repo for my own understanding of C++ concepts.
- This code repo demonstrates the use of keyword `const` for declaring a pointer array pointing to an array of `Student` class objects.

# Explanation
- The pointer array of 3 elements is declared using `const` keyword. This means that the original data cannot be changed using these pointers : `const Student* ptr_students[3]`
- This is safer, so that other users of this data don't have access or cannot change the original information.
- Now, it is known that the class instances or objects should always be passed as pointers. Passing by value is considered disadvantageous in cases where the original data could be very large arrays or may contain pointers to other objects.
- Hence, if the member functions of this class are accessed using this pointer array, the compiler should ensure that the original data is not changed. In order to do that, according to my understanding the compiler produces the error `error: passing ‘const Student’ as ‘this’ argument discards qualifiers [-fpermissive]`. 
- That way, it forces us to write `const` around the member functions like this : `void StudentInfo() const;` instead of `void StudentInfo();`