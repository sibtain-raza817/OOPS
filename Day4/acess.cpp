#include <iostream>
using namespace std;
class Human
{
    string religion, color;

protected:
    string name;
    int age, weight;
};

class Student : public Human
{
private:
    int roll_no, fees;

public:
    Student(string name, int age, int weight, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << weight << " " << roll_no << " " << fees << endl;
    }
};
int main()
{
    Student A("Raza", 18, 56, 25, 40000);
    A.display();
    return 0;
}