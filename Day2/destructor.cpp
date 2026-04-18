#include <iostream>
using namespace std;

// Class for Student
class Student
{
public:
    string name;
    int *data; // pointer for dynamic memory allocation

    // Constructor -> automatically called when object is created
    Student(string n)
    {
        name = n;

        // Dynamic allocation of memory for integer
        data = new int;

        // Assigning value to dynamically allocated memory
        *data = 100;

        cout << "Constructor called for: " << name << endl;
        cout << "Marks = " << *data << endl;
    }

    // Destructor -> automatically called when object is destroyed
    ~Student()
    {
        // Releasing dynamically allocated memory
        delete data;

        cout << "Destructor called for: " << name << endl;
    }
};

int main()
{
    // Creating object
    Student s1("Raza");

    cout << "Inside main function" << endl;

    // Destructor will be called automatically
    // when object goes out of scope

    return 0;
}