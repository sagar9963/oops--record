#include <iostream>
using namespace std;

class Sample {
private:
    int num;

public:
    // Function to input value
    void getData() {
        cout << "Enter a number: ";
        cin >> num;
    }

    // Declare friend function
    friend void display(Sample s);
};

// Friend function definition
void display(Sample s) {
    cout << "The number is: " << s.num << endl;
}

int main() {
    Sample obj;

    obj.getData();
    display(obj);   // Friend function call

    return 0;
}
