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
            cout<<amount<<"rs is credited successfully"<<endl;
        }else{
            cout<<"Amount shold be grater than 0\n";
        }
    }
    void  widhraw(int amount){
        if(amount > 0 && amount < balance){
            balance -= amount;
            throw "rs is debited successfully";
        }
        else if(amount < 0){
            throw "Amount should be greater than 0";
        }else{
            throw "Your balance is low!";
        }
    }
};
int main()
{
    Customer C1("Raza", 5000, 18);
    try
    {
        C1.deposite(100);
        C1.widhraw(6000);
    }
    catch(const char  *e)
    {
        cout<<"Exception Occured: "<<e<<endl;
    }
    
    
return 0;
}

/*
OUTPUT:-
100rs is credited successfully
Exception Occured: Your balance is low!
*/