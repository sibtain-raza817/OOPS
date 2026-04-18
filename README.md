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



## 🚀 Next Plan (Day 3)

* Inheritance (Single, Multiple, Multilevel)
* Access Control in Inheritance
* Real-world examples

In upcoming days, I will cover:

Constructors & Destructors
Inheritance
Polymorphism
Abstraction

## 🧠 Author

**Sibtain Raza**
B.Tech CSE Student | Learning OOP step by step

