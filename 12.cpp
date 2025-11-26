#include <iostream>
using namespace std;

class ClassA;  // Forward declaration

class ClassB {
private:
    int marksB;

public:
    void getData() {
        cout << "Enter marks of Class B student: ";
        cin >> marksB;
    }

    // Declare friend function
    friend void compare(ClassA, ClassB);
};

class ClassA {
private:
    int marksA;

public:
    void getData() {
        cout << "Enter marks of Class A student: ";
        cin >> marksA;
    }

    // Declare friend function
    friend void compare(ClassA, ClassB);
};

// Friend function definition
void compare(ClassA a, ClassB b) {
    cout << "\n--- Comparison Result ---\n";
    if (a.marksA > b.marksB)
        cout << "Class A student scored higher: " << a.marksA << endl;
    else if (b.marksB > a.marksA)
        cout << "Class B student scored higher: " << b.marksB << endl;
    else
        cout << "Both students have equal marks: " << a.marksA << endl;
}

int main() {
    ClassA objA;
    ClassB objB;

    objA.getData();
    objB.getData();

    compare(objA, objB);   // Friend function call

    return 0;
}
