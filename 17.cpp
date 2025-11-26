#include <iostream>
using namespace std;

class Height {
private:
    float feet;
    float inches;

public:
    // Function to input height
    void getHeight() {
        cout << "Enter Feet: ";
        cin >> feet;
        cout << "Enter Inches: ";
        cin >> inches;
    }

    // Function to display height
    void display() {
        cout << feet << " Feet " << inches << " Inches" << endl;
    }

    // Overload > operator
    bool operator>(Height h) {
        if (feet > h.feet)
            return true;
        else if (feet == h.feet && inches > h.inches)
            return true;
        else
            return false;
    }

    // Overload == operator
    bool operator==(Height h) {
        return (feet == h.feet && inches == h.inches);
    }
};

int main() {
    Height h1, h2;

    cout << "Enter first person's height:\n";
    h1.getHeight();

    cout << "\nEnter second person's height:\n";
    h2.getHeight();

    cout << "\nHeight Comparison Result:\n";
    if (h1 == h2)
        cout << "Both persons have the same height." << endl;
    else if (h1 > h2)
        cout << "First person is taller." << endl;
    else
        cout << "Second person is taller." << endl;

    return 0;
}
