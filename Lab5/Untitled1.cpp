#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class store
{
private:
    int id;
    char name[50];
    static int count;
public:
    store()
    {
        count ++;
        strcpy(name,"NULL");
        id=count;
        cout<<"Object create:"<<count<<endl;
    }
    store(char a[50])
    {
        count ++;
        strcpy(name,a);
        id=count;
        cout<<"Object create:"<<count<<endl;
    }
    void display()
    {
        cout<<endl<<"Store Name="<<name<<endl<<"ID="<<id<<endl;
    }
    ~store()
    {
        cout<<"Object destroyed:"<<id<<endl;
    }
};
int store::count=0;
int main()
{
    store s1, s2("Big Mart"), s3("BhatBhateni"), s4("E-Mart");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}
