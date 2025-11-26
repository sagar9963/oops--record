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

// Derived class 1 (inherits from Person)
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

// Derived class 2 (inherits from Student)
class Exam : public Student {
public:
    float marks;

    void getExamData() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayExamData() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Exam e;

    cout << "Enter Exam Student Details:\n";
    e.getPersonData();    // From Person class
    e.getStudentData();   // From Student class
    e.getExamData();      // From Exam class

    cout << "\n--- Exam Student Information ---\n";
    e.displayPer
