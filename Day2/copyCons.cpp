#include <iostream>
using namespace std;

class Customer{
    string name;
    int acc_no;
    int balance;


    // Default Constructor
    public:
    Customer(){
        cout<<"Constructor is called\n";
        // initilized value
        name = "raza";
        acc_no= 123;
        balance =200000;
    }
    //Parameterized constructor
    // Customer(string n, int acc, int b){
    //     name = n;
    //     acc_no = acc;
    //     balance = b;
    // }
    Customer(string name, int acc_no, int balance){
        this-> name= name;
        this-> acc_no= acc_no;
        this-> balance = balance;
    }

    
    //This is called Overloading constructor
    Customer(string n, int acc){
        name = n;
        acc_no = acc;
    }
    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<" "<<endl;
    }
    //Copy constructor
    Customer(Customer &B){
        name = B.name;
        acc_no = B.acc_no;
        balance = B.balance;
    }
};
int main()
{
    Customer A1;
    Customer A2("Ritesh", 1993, 760);
    // Customer A3("Rahul", 23323);
    A1.display();
    A2.display();
    // A3.display();

    //Copy Constructor
    Customer A4(A2);
    A4.display();
return 0;
}