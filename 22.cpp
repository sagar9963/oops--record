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

// Derived class 1
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

// Derived class 2
class Teacher : public Person {
public:
    string subject;

    void getTeacherData() {
        cin.ignore();  // To handle input buffer
        cout << "Enter Subject: ";
        getline(cin, subject);
    }

    void displayTeacherData() {
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "Enter Student Details:\n";
    s.getPersonData();
    s.getStudentData();

    cout << "\nEnter Teacher Details:\n";
    t.getPersonData();
    t.getTeacherData();

    cout << "\n--- Student Information ---\n";
    s.displayPersonData();
    s.displayStudentData();

    cout << "\n--- Teacher Information ---\n";
    t.displayPersonData();
    t.displayTeacherData();

    return 0;
}
