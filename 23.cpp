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

// Derived class 1 (Student) - inherits Person (multilevel part)
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

// Derived class 2 (Teacher) - inherits Person (hierarchical part)
class Teacher : public Person {
public:
    string subject;

    void getTeacherData() {
        cin.ignore(); // To handle input buffer
        cout << "Enter Subject: ";
        getline(cin, subject);
    }

    void displayTeacherData() {
        cout << "Subject: " << subject << endl;
    }
};

// Derived class 3 (Exam) - inherits Student (multilevel part)
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
    Teacher t;

    cout << "Enter Exam Student Details:\n";
    e.getPersonData();    // From Person
    e.getStudentData();   // From Student
    e.getExamData();      // From Exam

    cout << "\nEnter Teacher Details:\n";
    t.getPersonData();    // From Person
    t.getTeacherData();   // From Teacher

    cout << "\n--- Exam Student Information ---\n";
    e.displayPersonData();
    e.displayStudentData();
    e.displayExamData();

    cout << "\n--- Teacher Information ---\n";
    t.displayPersonData();
    t.displayTeacherData();

    return 0;
}
