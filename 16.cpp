#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Function to input time
    void getTime() {
        cout << "Enter Hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin >> minutes;
    }

    // Function to display time
    void display() {
        cout << hours << " Hours " << minutes << " Minutes" << endl;
    }

    // Overload > operator to compare two times
    bool operator>(Time t) {
        if (hours > t.hours)
            return true;
        else if (hours == t.hours && minutes > t.minutes)
            return true;
        else
            return false;
    }

    // Overload == operator to check equality
    bool operator==(Time t) {
        return (hours == t.hours && minutes == t.minutes);
    }
};

int main() {
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.getTime();

    cout << "\nEnter second time:\n";
    t2.getTime();

    cout << "\nTime Comparison Result:\n";
    if (t1 == t2)
        cout << "Both clocks show the same time." << endl;
    else if (t1 > t2)
        cout << "First clock shows later time." << endl;
    else
        cout << "Second clock shows later time." << endl;

    return 0;
}
