#include <iostream>                  
using namespace std;                  

class Customer {                       // Declare class Customer
    string name;                       // Member variable: stores customer name
    int balance;                       // Member variable: stores current balance
    static int total_count;            // Static member: counts total number of Customer objects (shared by all objects)

public:                                // Public section: these members are accessible from outside
    Customer(string name, int balance) {  // Constructor: called when a Customer object is created
        this->name = name;             // Set this object's name to the given name
        this->balance = balance;       // Set this object's balance to the given balance
        total_count++;                 // Increment the static counter (every new object increases total_count by 1)
    }

    void deposit(int amount) {         // Method: add money to the balance
        if (amount > 0) {              // If amount is positive
            balance += amount;         // Add the amount to balance
        } else {                       // If amount is <= 0
            cout << "Invalid amount!" << endl;  // Show error message
        }
    }

    void withdraw(int amount) {        // Method: withdraw money from balance
        if (amount > 0 && amount <= balance) {  // If amount is positive and <= current balance
            balance -= amount;         // Subtract amount from balance
        } else {                       // If amount is invalid or more than balance
            cout << "Amount is insufficient!" << endl;  // Show error message
        }
    }

    void display() {                   // Method: show name and balance
        cout << name << " " << balance << endl;  // Print name and balance separated by space
    }

    static void update() {             // Static method: can be called using class name (Customer::update())
        cout << "Total count is: " << total_count << endl;  // Print the total number of Customer objects
    }
};

int Customer::total_count = 0;        // Define and initialize the static member outside the class (exactly once)

int main() {                           // Main function: program starts here
    Customer A1("Raza", 20000);        // Create a Customer object A1 with name "Raza" and balance 20000
                                      // Constructor also increments total_count (so total_count becomes 1)

    A1.deposit(2000);                  // Call deposit method: add 2000 to A1's balance
    A1.display();                      // Call display method: print A1's name and updated balance

    Customer::update();                // Call static method: print total_count (1 in this case)

    return 0;                          // Return 0 means program ended successfully
}