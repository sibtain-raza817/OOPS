📘 OOPS Journey - Day 1

Welcome to my Object-Oriented Programming (OOP) learning journey 🚀
This repository documents my daily progress as I build strong fundamentals in OOP using practical examples.

📅 Day 1: Introduction to OOP & Core Concepts
🔹 1. What is OOP?

Object-Oriented Programming (OOP) is a programming paradigm that organizes code using objects and classes instead of functions and logic alone.

It helps in:

Writing reusable code
Improving readability
Managing complex systems easily
🔹 2. Class & Object
✅ Class

A class is a blueprint or template used to create objects.

class Student {
    int age;
};
✅ Object

An object is an instance of a class.

Student s1;

👉 Think of:

Class = Design of a car
Object = Actual car built using that design
🔹 3. Access Modifiers

Access modifiers define the visibility of variables and functions inside a class.

Modifier	Access Level
Private	Inside class only
Public	Anywhere
Protected	Inside class + derived class
class Example {
private:
    int x;

public:
    int y;
};
🔹 4. Getter & Setter Functions

Used to access and modify private data safely.

class Student {
private:
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

👉 Why important?

Protects data
Controls how values are set
🔹 5. Empty Class

An empty class still occupies memory.

class Empty {};

👉 Size of empty class is 1 byte
Reason: Every object must have a unique address.

🔹 6. Size of Class & Object
Class itself does not take memory
Memory is allocated when object is created
class A {
    int x;
    char y;
};

A obj;

👉 Size depends on:

Data members
Padding (important!)
🔹 7. Padding Concept

Padding is added by the compiler to optimize memory alignment.

class Example {
    char a;   // 1 byte
    int b;    // 4 bytes
};

👉 Actual size may become 8 bytes instead of 5

Why?

CPU accesses memory faster when aligned properly
🔹 8. Object Memory Layout

Memory is allocated based on:

Data members
Alignment rules
Padding

👉 Order of variables affects memory usage!

🔹 9. Dynamic Allocation

Objects can be created dynamically using new.

Student* s = new Student();

👉 Key points:

Stored in heap memory
Must be deleted manually
delete s;
📌 Key Learnings from Day 1
Understood difference between class & object
Learned about access control
Explored memory concepts (size, padding)
Practiced encapsulation using getters/setters
Learned static vs dynamic object creation
🚀 What's Next?



# 📘 OOPS Journey - Day 2

Welcome to Day 2 of my Object-Oriented Programming (OOP) journey 🚀
In this section, I explored **constructors, object copying, memory behavior, and object lifecycle** in C++.


## 📅 Topics Covered

* Introduction to Constructors
* Default Constructor
* Parameterized Constructor
* `this` Keyword
* Constructor Overloading
* Inline Constructor
* Copy Constructor
* Assignment Operator (`=`)
* Const Function Overloading
* Destructor & Call Order


## 🔹 1. Constructor (Introduction)

A **constructor** is a special function:

* Automatically called when an object is created
* Has the same name as the class
* Does not have a return type

👉 It is mainly used to **initialize object data**


## 🔹 2. Default Constructor

A constructor with no parameters.
cpp
Customer() {
    name = "Default";
    acc_no = 0;
    balance = 0;
}

👉 Called automatically when object is created without arguments.

## 🔹 3. Parameterized Constructor

Allows passing values while creating objects.
cpp
Customer(string name, int acc_no, int balance) {
    this->name = name;
    this->acc_no = acc_no;
    this->balance = balance;
}

## 🔹 4. `this` Keyword

* Refers to the current object
* Helps resolve naming conflicts between variable
cpp
this->name = name;

## 🔹 5. Constructor Overloading

Multiple constructors in the same class with different parameters.
cpp
Customer(string name, int acc_no);
Customer(string name, int acc_no, int balance);

👉 Provides flexibility in object creation.

## 🔹 6. Inline Constructor

Uses **initializer list** and can be defined in one line.
cpp
inline Customer(string x, int y, int z)
    : name(x), acc_no(y), balance(z) {}

👉 Improves readability and may improve performance.

## 🔹 7. Copy Constructor

Creates a new object by copying an existing object.
cpp
Customer(const Customer &obj) {
    name = obj.name;
    acc_no = obj.acc_no;
    balance = obj.balance;
}

👉 Important when dealing with memory and objects.

## 🔹 8. Assignment Operator (`=`)

Used to copy values between already created objects.

cpp
A2 = A1;

👉 Difference from copy constructor:

* Copy constructor → during initialization
* Assignment operator → after initialization

## 🔹 9. Const Function Overloading

Functions behave differently when marked `const`.
cpp
void display() const {
    cout << name << endl;
}
👉 Const functions cannot modify object data.


## 🔹 10. Destructor

A special function:

* Called automatically when object goes out of scope
* Used for cleanup

cpp
~Customer() {
    cout << "Destructor called\n";
}


## 🔹 11. Destructor Call Order

* Objects are destroyed in **reverse order of creation**
* Follows **LIFO (Last In First Out)** principle



## 💻 Complete Implementation

cpp
#include <iostream>
using namespace std;

class Customer {
    string name;
    int acc_no;
    int balance;

public:
    // Default Constructor
    Customer() {
        cout << "Default Constructor Called\n";
        name = "Raza";
        acc_no = 123;
        balance = 200000;
    }

    // Parameterized Constructor
    Customer(string name, int acc_no, int balance) {
        cout << "Parameterized Constructor Called\n";
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    // Inline Constructor (Initializer List)
    inline Customer(string x, int y, int z, bool flag)
        : name(x), acc_no(y), balance(z) {
        cout << "Inline Constructor Called\n";
    }

    // Constructor Overloading
    Customer(string n, int acc) {
        cout << "Overloaded Constructor Called\n";
        name = n;
        acc_no = acc;
        balance = 0;
    }

    // Copy Constructor
    Customer(const Customer &obj) {
        cout << "Copy Constructor Called\n";
        name = obj.name;
        acc_no = obj.acc_no;
        balance = obj.balance;
    }

    // Display Function
    void display() {
        cout << name << " " << acc_no << " " << balance << endl;
    }

    // Const Function Overloading
    void display() const {
        cout << "Const Display -> " << name << endl;
    }

    // Destructor
    ~Customer() {
        cout << "Destructor Called for " << name << endl;
    }
};

int main() {
    Customer A1;                         // Default
    Customer A2("Ritesh", 1993, 760);   // Parameterized
    Customer A3("Ritesh", 23323);       // Overloaded

    Customer A4 = A2;                   // Copy Constructor

    A3 = A1;                            // Assignment Operator

    A1.display();
    A2.display();
    A3.display();
    A4.display();

    return 0;
}


## 📌 Key Takeaways

* Constructors automatically initialize objects
* `this` keyword helps avoid naming conflicts
* Copy constructor and assignment operator are different
* Destructor handles cleanup automatically
* Object lifecycle follows stack (LIFO order)



# 📘 OOPS Journey - Day 3

Today I learned some important OOP concepts that improve **data control, memory efficiency, and code design**.

---

## 📅 Topics Covered

* Static Data Member
* Static Member Function
* Encapsulation
* Abstraction

---

## 🔹 1. Static Data Member

* Shared among all objects of a class
* Only **one copy** exists in memory
* Declared inside class, defined outside

```cpp
class Customer {
public:
    static int totalCustomers;

    Customer() {
        totalCustomers++;
    }
};

// Definition (important)
int Customer::totalCustomers = 0;
```

👉 All objects use the same `totalCustomers`

---

## 🔹 2. Static Member Function

* Can access only **static data members**
* Called using class name (no object needed)

cpp
class Customer {
public:
    static int totalCustomers;

    static void showTotal() {
        cout << "Total Customers: " << totalCustomers << endl;
    }
};


cpp
Customer::showTotal();


## 🔹 3. Encapsulation

* Wrapping data + functions together
* Hiding data using **private access**

cpp
class Customer {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};


👉 Protects data from direct access


## 🔹 4. Abstraction

* Showing only **essential details**
* Hiding internal implementation

```cpp
class BankAccount {
public:
    void deposit(int amount) {
        // internal logic hidden
        cout << "Amount Deposited\n";
    }
};


👉 User doesn’t know internal working

---

## 💻 Complete Example

```cpp
#include <iostream>
using namespace std;

class Customer {
private:
    string name;
    int balance;

public:
    static int totalCustomers;

    // Constructor
    Customer(string name, int balance) {
        this->name = name;
        this->balance = balance;
        totalCustomers++;
    }

    // Encapsulation (Getter/Setter)
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }

    // Static Function
    static void showTotalCustomers() {
        cout << "Total Customers: " << totalCustomers << endl;
    }

    // Abstraction
    void deposit(int amount) {
        balance += amount;
        cout << amount << " Deposited\n";
    }

    void display() {
        cout << name << " " << balance << endl;
    }
};

// Static member definition
int Customer::totalCustomers = 0;

int main() {
    Customer A1("Raza", 1000);
    Customer A2("Ali", 2000);

    A1.deposit(500);
    A1.display();

    Customer::showTotalCustomers();

    return 0;
}

## 📌 Key Takeaways

* Static variables are shared across all objects
* Static functions belong to class, not objects
* Encapsulation = Data protection
* Abstraction = Hide complexity

---

## 🚀 Next (Day 4)

# 📘 OOPS Journey - Day 4 & Day 5

In these days, I learned how classes can **reuse properties and build relationships**, making code more scalable and structured.

---

## 📅 Day 4: Inheritance

### 🔹 What is Inheritance?

Inheritance allows a class (**child/derived class**) to acquire properties and behavior of another class (**parent/base class**).

👉 Promotes:

* Code reusability
* Better organization
* Reduced redundancy

---

### 🔹 Basic Syntax

```cpp
class Parent {
public:
    void show() {
        cout << "Parent Function\n";
    }
};

class Child : public Parent {
};
```

```cpp
Child obj;
obj.show();  // inherited function
```

---

### 🔹 Access Modes in Inheritance

| Mode      | Public Members | Protected Members |
| --------- | -------------- | ----------------- |
| Public    | Public         | Protected         |
| Protected | Protected      | Protected         |
| Private   | Private        | Private           |

---

## 📅 Day 5: Types of Inheritance

---

### 🔹 1. Single Inheritance

One child inherits from one parent.

```cpp
class A {};
class B : public A {};
```

---

### 🔹 2. Multilevel Inheritance

Chain of inheritance (A → B → C)

```cpp
class A {};
class B : public A {};
class C : public B {};
```

---

### 🔹 3. Multiple Inheritance

One class inherits from multiple parents.

```cpp
class A {};
class B {};
class C : public A, public B {};
```

---

### 🔹 4. Hierarchical Inheritance

Multiple classes inherit from one parent.

```cpp
class A {};
class B : public A {};
class C : public A {};
```

---

### 🔹 5. Hybrid Inheritance

Combination of different inheritance types.

---

## 🔹 Real-World Example

```cpp
#include <iostream>
using namespace std;

// Parent Class
class Vehicle {
public:
    void start() {
        cout << "Vehicle starts\n";
    }
};

// Child Class
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving\n";
    }
};

int main() {
    Car c;
    c.start();  // inherited
    c.drive();  // own function
}
```

👉 Example:

* Vehicle → Parent
* Car → Child

---

## 📌 Key Takeaways

* Inheritance enables **code reuse**
* Helps build real-world relationships
* Multiple types exist for different use cases
* Access specifiers control visibility

---

# 📘 OOPS Journey - Day 6

Today I learned **Polymorphism**, which allows objects to behave differently based on context, making programs more flexible and powerful.

---

## 📅 Topics Covered

* Polymorphism
* Function Overloading
* Operator Overloading
* Virtual Functions

---

## 🔹 1. Polymorphism

Polymorphism means **"many forms"**.

👉 Same function name, different behavior
👉 Achieved using:

* Compile-time polymorphism
* Runtime polymorphism

---

## 🔹 2. Function Overloading (Compile-Time)

Same function name with different parameters.

```cpp id="j9zqha"
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};
```

---

## 🔹 3. Operator Overloading

Operators can be redefined for user-defined types.

```cpp id="c8twx4"
class Complex {
public:
    int real, imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator + (Complex obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};
```

---

## 🔹 4. Virtual Function (Runtime Polymorphism)

* Declared using `virtual` keyword
* Achieves **runtime polymorphism**
* Calls function based on object type

```cpp id="s7t2ps"
class Base {
public:
    virtual void show() {
        cout << "Base class\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class\n";
    }
};
```

```cpp id="kz8h1f"
Base* ptr;
Derived d;

ptr = &d;
ptr->show();  // calls Derived version
```

---

## 📌 Key Takeaways

* Polymorphism = same interface, different behavior
* Function overloading works at compile time
* Operator overloading improves readability
* Virtual functions enable runtime decision making

---


# 📘 OOPS Journey - Day 7

Today I learned **Exception Handling**, which helps handle runtime errors gracefully without crashing the program.

---

## 📅 Topics Covered

* Exception Handling
* try, catch, throw
* Multiple catch blocks
* Generic catch (`...`)

---

## 🔹 1. What is Exception Handling?

Exception handling is used to **handle runtime errors** and maintain normal program flow.

👉 Prevents program crashes
👉 Improves reliability

---

## 🔹 2. Basic Syntax

```cpp id="c9b4xk"
try {
    // risky code
}
catch(type e) {
    // handle error
}
```

---

## 🔹 3. throw Keyword

Used to **throw an exception** when an error occurs.

```cpp id="c2i7zx"
int a = 10, b = 0;

if (b == 0) {
    throw "Division by zero error";
}
```

---

## 🔹 4. try-catch Example

```cpp id="3q0y9p"
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0)
            throw "Cannot divide by zero";

        cout << a / b;
    }
    catch (const char* msg) {
        cout << "Error: " << msg;
    }

    return 0;
}
```

---

## 🔹 5. Multiple Catch Blocks

```cpp id="2kqg7z"
try {
    throw 10;
}
catch (int e) {
    cout << "Integer exception\n";
}
catch (...) {
    cout << "Unknown exception\n";
}
```

---

## 🔹 6. Generic Catch (`...`)

* Catches any type of exception
* Should be written **last**

##Code:
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

## 📌 Key Takeaways

* `try` → code that may cause error
* `throw` → used to signal an error
* `catch` → handles the error
* Multiple catch blocks improve handling
* `...` catches unknown exceptions

---

## 🚀 Next (Optional Advanced)

* Custom Exceptions
* Exception Handling with Classes
* File Handling

---



## 🧠 Author

**Sibtain Raza**
B.Tech CSE Student | Learning OOP step by step

