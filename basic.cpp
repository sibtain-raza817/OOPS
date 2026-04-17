#include <iostream>
using namespace std;
class Students{
    public:
    string name;
    int age;
    int roll_no;
    int grade;
};
int main()
{
    Students s1;
    s1.name = "Raza";
    s1.age = 19;
    s1.grade = 'A';
    s1.roll_no = 25;

    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll_no<<" "<<s1.grade;
return 0;
}