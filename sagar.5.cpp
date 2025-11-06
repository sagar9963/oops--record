#include<iostream>
using namespace std;
class Ebill
{
    private:
    int customerIP,unit 5;
    char customer name [50],Address[50];
    sloat amount;
    public:
    void getdetails()
    {
        cout<<"Enter customer IP:";
        cin>>customerID;
        cout<<"Enter customer Name:";
        cin>>customer name;
        cout<<"Enter address:";
        cin>>address;
        cout<<"Enter no.of units:";
        cin>>units;
    }
    void calculate(;
        {
            else if (units <=400)
            amount=(100*2.25)+(unit-200)*4.25;
        else if(unit<=600)
        amount=(100*2.25)+(200*4.25)+(units-400)*6.25;
    else
    amount=(100*2.25)+(200*4.25)+(400*6.35)*6.25;
        }
        void print()
        {
            cout<<"/n customer id:"<< customer id;
            cout<<"/n Name:"<<Name;
            cout<<"/units:"<<units
            cout<<"/Bill amount:"<<amount;
        }
    };
    int main()
    {
        Ebill B;
        B.getdetails();
        B.calculate();
        B.print();
    }
    