#include <iostream>
using namespace std;
//Basic Class write
class Students{

    // By default it will be private ok
    //Access Modifier
    public:
    //Data Of User
    string name;
    int age;
    int roll_no;
    int grade;
}; // this symbol should be other may occur error 
int main()
{
    //Object Create using any variable like s1, v1 as u wish 
    Students s1;
    // This is a way  to initialized the value to each variable 
    s1.name = "Raza";
    s1.age = 19;
    s1.grade = 'A';
    s1.roll_no = 25;

    // print function to print all the data 
    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll_no<<" "<<s1.grade;
return 0;
}