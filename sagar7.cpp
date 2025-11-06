#include<<iostream>
using namespace std;
class time
{
    privete:
    int hours,minutes
    public:
    void gettime();
    void addtime(time t1,time t2);
    void display time();
};
void time::gettime()
{
    cout<<"Enter the hours:";
    cin>>hours;
    cout<<"Enter the minutes:";
    cin>>minutes;
}
void time::addtime(timet1,time t2)
{
    minute=t1 minutes+t2minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours
}
void time::displaytime()
{
cout<<"hours:"<<hours<<endl;
cout<<"minutes:"<<minutes<<endl;
}
int main()
{
    time t1,t2,t3;
    t1.gettime()
    t2.gettime()
    t3.addtime(t1,t2);
    t3.displaytime();
    return0;
    