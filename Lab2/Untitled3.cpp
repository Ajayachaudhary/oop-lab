#include<iostream>
#include<conio.h>
using namespace std;
float SI(float,float,float);
int main()
{
    float p,t,r;
    cout<<"Enter the value of p=";
    cin>>p;
    cout<<"Enter the value of t=";
    cin>>t;
    cout<<"Enter the value of r=";
    cin>>r;
    cout<<"Simple interest is="<<SI(p,t,r);
}
inline float SI(float p,float t,float r)
{
    return (p*t*r)/100;
}
