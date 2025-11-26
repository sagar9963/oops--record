#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes;

    // Function to input time
    void getTime() {
        cout << "Enter Hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin >> minutes;
    }

    // Function to add two time objects
    Time add(Time t) {
        Time temp;
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours;

        // Adjust if minutes ≥ 60
        if (temp.minutes >= 60) {
            temp.minutes -= 60;
            temp.hours++;
        }

        return temp;
    }

    // Function to display time
    void display() {
        cout << hours << " Hours " << minutes << " Minutes" << endl;
    }
};

int main() {
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.getTime();

    cout << "\nEnter second time:\n";
    t2.getTime();

    t3 = t1.add(t2);

    cout << "\nTotal Time = ";
    t3.display();

    return 0;
}
