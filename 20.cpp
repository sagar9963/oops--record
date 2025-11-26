#include <iostream>
using namespace std;

// Base class 1
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

// Base class 2
class Address {
public:
    string city;
    string country;

    void getAddressData() {
        cin.ignore(); // To handle input buffer
        cout << "Enter City: ";
        getline(cin, city);
        cout << "Enter Country: ";
        getline(cin, country);
    }

    void displayAddressData() {
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
    }
};

// Derived class
class Student : public Person, public Address {
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
    s.getPersonData();     // Input from Person class
    s.getAddressData();    // Input from Address class
    s.getStudentData();    // Input from Student class

    cout << "\n--- Student Information ---\n";
    s.displayPersonData();
    s.displayAddressData();
    s.displayStudentData();

    return 0;
}
