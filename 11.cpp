#include <iostream>
using namespace std;

class Payslip {
public:
    string name;
    int id;
    float basic, hra, da, gross, pf, net;

    // Function to input employee details
    void getData() {
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    // Function to calculate payslip components
    void calculate() {
        hra = basic * 0.20;   // 20% of basic
        da  = basic * 0.10;   // 10% of basic
        pf  = basic * 0.05;   // 5% deduction

        gross = basic + hra + da;
        net = gross - pf;
    }

    // Function to display payslip
    void display() {
        cout << "\n----------- PAYSLIP -----------\n";
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID   : " << id << endl;
        cout << "Basic Salary  : " << basic << endl;
        cout << "HRA (20%)     : " << hra << endl;
        cout << "DA  (10%)     : " << da << endl;
        cout << "PF  (5%)      : " << pf << endl;
        cout << "Gross Salary  : " << gross << endl;
        cout << "Net Salary    : " << net << endl;
        cout << "--------------------------------\n";
    }
};

int main() {
    Payslip p;

    p.getData();
    p.calculate();
    p.display();

    return 0;
}
