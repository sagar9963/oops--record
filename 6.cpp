#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor is called!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor is called!" << endl;
    }
};

int main() {
    cout << "Creating object...\n";
    Demo obj;   // Constructor will be called automatically

    cout << "Object is in use...\n";

    cout << "Program ending...\n";
    // When main() ends, destructor will be called automatically

    return 0;
}
