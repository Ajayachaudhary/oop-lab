
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class college
{
private:
    char college_name[50];
    long long phone_no;
public:
    void getdata(char n[50],long long p)
    {
      strcpy(college_name,n);
      phone_no=p;
    }
    void displaydata()
    {
        cout<<"College name is="<<college_name<<endl;
        cout<<"College phone number is="<<phone_no<<endl;
    }
};
int main()
{
    int i,n;
    long long p;
    char b[50];
    college *ptr;
    cout<<"Enter the number of record:";
    cin>>n;
    ptr=new college[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the college name::";
        cin>>b;
        cout<<"Enter the phone number::";
        cin>>p;
        ptr[i].getdata(b,p);
    }
    for(i=0;i<n;i++)
    {
        ptr[i].displaydata();
    }
}
