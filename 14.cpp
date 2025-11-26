#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Function to input complex number
    void getData() {
        cout << "Enter Real Part: ";
        cin >> real;
        cout << "Enter Imaginary Part: ";
        cin >> imag;
    }

    // Operator overloading for +
    Complex operator + (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "\nEnter second complex number:\n";
    c2.getData();

    c3 = c1 + c2;   // Using overloaded + operator

    cout << "\nSum of complex numbers = ";
    c3.display();

    return 0;
}
