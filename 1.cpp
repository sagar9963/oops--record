#include <iostream>
using namespace std;

// Creating a Student Class
class Student {
public:
    string name;
    int roll;
    float marks;

    // Member function to input data
    void getData() {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Member function to display data
    void displayData() {
        cout << "\n--- Student Information ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;  // Creating object

    cin.ignore(); // To handle getline issue
    s.getData();  // Taking details
    s.displayData(); // Displaying details

    return 0;
}
