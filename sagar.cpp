#include<iostream>
using namespace std;
class book{
    private:
    int acc no pages;
    char book name[50],Author[50],ISBN[50];
    float price;
        public:
    void getdetails(){
        cout<<"Enter book name:";
        cin>>book name;
        cout<<"enter Author:";
        cin>>Author;
        cout<<"Enter ISBN no:";
        cin>>ISBN no;
        cout<<"enter pages:";
        cin>>pages;
        cout<<"enter acc no:";
        cin>>acc no;
        cout<<"enter price:";
        cin>>price;
        void display(){
            cout<<"book name:"<<book<<end;
            cout<<"author name:"<<author<<end;
            cout<<"ISBN no:"<<ISBN<<end;
            cout<<"pages:"<<pages<<end;
            cout<<"acc no:"<<acc<<end;
            cout<<"price:"<<price<<end;
        }
    };
    int main(){
        int n;
        cout<<"enter no.of books":
        cin>>n;
        book b[100];
        for(int i=0;n;i++)
        {
        cout<<"/n enter details for book"<<
        i+1<<";\n;
        B[i].get details();
    }
    cout<<"\n===(library book details)==\n";
    for(int i=0;im;i++){
        cout<<"\n book"<<i+1<<":\n";
        for(int i=0;i<;i++){
            cout<<"\nbook"<<i+1<<:"\n";
            B[i].display();
        }
        return 0;
    }