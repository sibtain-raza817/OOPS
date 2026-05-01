#include <iostream>
using namespace std;

class Customer{
    string name;
    int balance;
    int age;

    public:
    Customer(string name, int balance, int age){
        this->name = name;
        this->balance = balance;
        this->age = age;
    }

    void deposite(int amount){
        if(amount > 0){
            balance =+ amount;
            cout<<amount<<"rs is credite successfully"<<endl;
        }else{
            cout<<"Amount shold be grater than 0\n";
        }
    }
    void  widhraw(int amount){
        if(amount > 0){
            balance -= amount;
            cout<<amount<<"rs is debite successfully\n";
        }
        else{
            cout<<"Amount should ne greater than 0\n";
        }
    }
};
int main()
{
    Customer C1("Raza", 5000, 18);
    C1.deposite(100);
return 0;
}