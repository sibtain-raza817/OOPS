#include <iostream>
using namespace std;

class Complex {
    int real, img; // real and imaginary parts

public:

    // Default constructor
    Complex() {
        real = 0;
        img = 0;
    }

    // Parameterized constructor
    Complex(int real, int img) {
        this->real = real;
        this->img = img;
    }

    // Function to display complex number
    void display() {
        cout << real << " + i" << img << endl;
    }

    // Operator overloading for +
    Complex operator+(Complex &c) {
        Complex ans; // object to store result

        ans.real = real + c.real; // add real parts
        ans.img = img + c.img;    // add imaginary parts

        return ans; // return result
    }
};

int main() {

    // Creating two objects
    Complex A1(20, 10), A2(30, 15);

    // Adding two complex numbers using overloaded +
    Complex A3 = A1 + A2;

    // Display result
    A3.display();

    return 0;
}