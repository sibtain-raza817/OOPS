#include <iostream>                    
using namespace std;                  

class Customer {                       // Create a class named Customer
    string name;                       // Store customer name
    int balance;                       // Store customer balance
    int age;                           // Store customer age

public:                                

    Customer(string name, int balance, int age) {   // Constructor with 3 parameters
        this->name = name;             // Assign given name to class member name
        this->balance = balance;       // Assign given balance to class member balance
        this->age = age;               // Assign given age to class member age
    }

    void deposit(int amount) {         // Function to deposit money
        if (amount > 0) {              // Check if amount is valid
            balance += amount;         // Add amount to balance
        } else {                       // If amount is not valid
            cout << "Invalid Amount" << endl;   // Print error message
        }
    }

    void withdraw(int amount) {        // Function to withdraw money
        if (amount <= balance && amount > 0) {  // Check if amount is valid and balance is enough
            balance -= amount;         // Subtract amount from balance
        } else {                       // If invalid withdrawal
            cout << "Balance is insufficient" << endl;   // Print error message
        }
    }

    void updateAge(int age) {          // Function to update age
        if (age > 0 && age < 100) {    // Check valid age range
            this->age = age;           // Update age
        } else {                       // If age is invalid
            cout << "Invalid age" << endl;   // Print error message
        }
    }

    void display() {                   // Function to display customer details
        cout << name << " " << balance << " " << age << endl;  // Print all details
    }
};

int main() {                           // Main function starts here
    Customer A1("Ritesh", 20000, 19);  // Create object A1 with name, balance, and age
    Customer A2("Arif", 100, 25);      // Create object A2
    Customer A3("Aslam", 4000, 36);    // Create object A3

    A1.deposit(30000);                 // Deposit 30000 into A1 account
    A3.deposit(2500);                  // Deposit 2500 into A3 account
    A2.deposit(300);                   // Deposit 300 into A2 account

    A1.display();                      // Display A1 details
    A2.display();                      // Display A2 details
    A3.display();                      // Display A3 details

    return 0;                          // End program successfully
}