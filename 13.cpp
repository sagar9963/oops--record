#include <iostream>
using namespace std;

class Complex {
public:
    float real, img;

    // Function to input values
    void getData() {
        cout << "Enter Real Part: ";
        cin >> real;
        cout << "Enter Imaginary Part: ";
        cin >> img;
    }

    // Operator overloading for +
    Complex operator +(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img  = img + c.img;
        return temp;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "\nEnter second complex number:\n";
    c2.getData();

    c3 = c1 + c2;   // Operator overloading in action

    cout << "\nSum = ";
    c3.display();

    return 0;
}
