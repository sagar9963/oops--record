#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    // Function to input string
    void getData() {
        cout << "Enter string: ";
        getline(cin, str);
    }

    // Function to display string
    void display() {
        cout << str << endl;
    }

    // Overload + operator to concatenate two MyString objects
    MyString operator+(MyString s) {
        MyString temp;
        temp.str = str + s.str;  // Concatenate strings
        return temp;
    }
};

int main() {
    MyString s1, s2, s3;

    cout << "Enter first string:\n";
    s1.getData();

    cout << "\nEnter second string:\n";
    s2.getData();

    s3 = s1 + s2;  // Using overloaded + operator

    cout << "\nConcatenated String: ";
    s3.display();

    return 0;
}
