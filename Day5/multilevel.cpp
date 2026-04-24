#include <iostream>
using namespace std;

//Multilevel Inheritance

class Person{
    protected:
    string name;
    int age;

    public:
    void introduce(){
        cout<<"Hello my name is: "<< name<<endl;
    }
};
class Employee : public Person{
    protected:
    int salary;

    public:
    void mysalary(){
        cout<<"My salary is :"<<salary<<endl;
    }
};

class Manager : public Employee{
    public:
    string dept;

    public:
    Manager(string name, int age, int salary, string dept){
        this->name = name;
        this->age = age;
        this->salary = salary;
        this->dept = dept;
    }
    void work(){
        cout<<"I am working in  dept of CSE :"<<dept<<endl;
    }
};
int main()
{
    Manager A1("Raza", 19,2000000, "CSE" );
    A1.introduce();
    A1.mysalary();
    A1.work();
return 0;
}