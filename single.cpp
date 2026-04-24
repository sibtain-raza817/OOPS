#include <iostream>
using namespace std;

//Single Inheritance
class Human{
    protected:
    string name;
    int age;

    public:
    void work(){
        cout<<"I am Working !\n";
    }
};
class Student: public Human{
    int roll_no;
    int fees;

        //constructor
        public:
        Student(string name, int age, int roll_no, int fees){
            // initilization
            this->name = name;
            this->age = age;
            this->roll_no = roll_no;
            this->fees = fees;
        }
        
        void display(){
            cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
        }
};
int main()
{
    Student A1("Raza", 19, 25, 30000);
    A1.work();
    A1.display();
return 0;
}