#include <iostream>
using namespace std;

// Define a class named Student
class Student
{
public:
    string name;   // to store student's name
    int age;       // to store student's age
    int roll_no;   // to store student's roll number
    string grade;  // to store student's grade
};

int main()
{
    // Dynamic allocation of Student object
    Student *S = new Student; 
    // S is a pointer that stores the address of dynamically created object

    // Accessing members using dereference operator (*)
    (*S).name = "Raza";
    (*S).age = 16;
    (*S).roll_no = 25;
    (*S).grade = "A+";

    // Accessing members using arrow operator (->), which is cleaner
    cout << S->name << " ";
    cout << S->age << " ";
    cout << S->roll_no << " ";
    cout << S->grade << " ";

    // Output: Raza 16 25 A+

    return 0;
}