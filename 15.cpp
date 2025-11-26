#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor
    Counter() {
        count = 0;
    }

    // Function to display value
    void display() {
        cout << "Count = " << count << endl;
    }

    // Overload ++ (pre-increment)
    void operator++() {
        ++count;
    }

    // Overload -- (pre-decrement)
    void operator--() {
        --count;
    }
};

int main() {
    Counter c;

    cout << "Initial Value: ";
    c.display();

    ++c;   // Using overloaded ++ operator
    cout << "After Increment: ";
    c.display();

    --c;   // Using overloaded -- operator
    cout << "After Decrement: ";
    c.display();

    return 0;
}
