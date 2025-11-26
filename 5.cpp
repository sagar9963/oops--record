#include <iostream>
using namespace std;

class ElectricityBill {
public:
    string name;
    int units;
    float total;

    void getData() {
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculateBill() {
        if (units <= 100)
            total = units * 1.5;
        else if (units <= 200)
            total = 100 * 1.5 + (units - 100) * 2.5;
        else if (units <= 300)
            total = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
        else
            total = 100 * 1.5 + 100 * 2.5 + 100 * 4.0 + (units - 300) * 5.0;

        // Add fixed charge
        total += 50;
    }

    void displayBill() {
        cout << "\n------ ELECTRICITY BILL ------\n";
        cout << "Customer Name : " << name << endl;
        cout << "Units Used    : " << units << endl;
        cout << "Total Amount  : Rs. " << total << endl;
        cout << "--------------------------------\n";
    }
};

int main() {
    ElectricityBill bill;

    bill.getData();
    bill.calculateBill();
    bill.displayBill();

    return 0;
}
