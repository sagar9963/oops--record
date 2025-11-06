#include<iostream>
using namespace std;
class complex
{
    privete:
    double real;
    double img;
    public:
    complex(double r=00.doublei=00;);
    complex add complex(complex();
    void display();
};
complex:: complex(doubler,doublei)
{
    reaf=r;
    img=i;
}
complex::add complex(complex(2)
{
    complex dum;
    sum.real=real+c2.real;
    sum.img=ing+c2.img;
    return sum;
}
void complex::display()
{
    std:: cout<<real<<"+i"<<img<<std::endl;
}
int main()
{
    complex c1(9.16,5.78);
    complex c2(2.1,337.2);
    complex result;
    std::cout<<"complex number 1";
    c1.display;
    std::cout<<"complex number2";
    c2.display();
    result:c,.add complex[c2];
    std:: cout<<"dum:";
    result.display();
    return0;
}
