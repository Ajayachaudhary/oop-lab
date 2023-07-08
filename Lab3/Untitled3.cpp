#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *,int *);
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"Before swapping="<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<"After swapping="<<a<<" and "<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping="<<a<<" and "<<b;
    return 0;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

