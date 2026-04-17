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

In upcoming days, I will cover:

Constructors & Destructors
Inheritance
Polymorphism
Abstraction

Stay tuned 💡

🧠 Author

Sibtain Raza
B.Tech CSE Student | Learning OOP step by step
