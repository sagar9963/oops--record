#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"constructor called!"<<end!;
    }
    student(){
        cout<<"Destructor called!"<<end!;
    }
    void display()
    {
        cout<<"Inside display function!"<<end!;
    }
};
int main()
cout<<"creating object d1"<<end1;
student s1;
s1;s1.display();
cout<<"exiting main..."end1;
return0;
}
