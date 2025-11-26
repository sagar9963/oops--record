#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void getPersonData() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    int roll;

    void getStudentData() {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }

    void displayStudentData() {
        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    Student s;

    cout << "Enter Student Details:\n";
    s.getPersonData();    // Input from base class
    s.getStudentData();   // Input from derived class

    cout << "\n--- Student Information ---\n";
    s.displayPersonData();   // Display from base class
    s.displayStudentData();  // Display from derived class

    return 0;
}
