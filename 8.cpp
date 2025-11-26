#include <iostream>
using namespace std;

class Complex {
public:
    float real, img;

    // Function to get complex number
    void getData() {
        cout << "Enter Real Part: ";
        cin >> real;
        cout << "Enter Imaginary Part: ";
        cin >> img;
    }

    // Function that returns object (sum of two complex numbers)
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;   // returning object
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

    c3 = c1.add(c2);  // object returned

    cout << "\nSum = ";
    c3.display();

    return 0;
}
