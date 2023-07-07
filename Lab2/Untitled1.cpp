#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float vol(float);
float vol(float,float);
float vol(float,float,float);
int main()
{
    float l,r,h,b;
    cout<<"Enter the value l=";
    cin>>l;
    cout<<"Enter the value r=";
    cin>>r;
    cout<<"Enter the value h=";
    cin>>h;
    cout<<"Enter the value b=";
    cin>>b;
    cout<<"Volume of cube is="<<vol(l)<<endl;
    cout<<"Volume of cube is="<<vol(r,h)<<endl;
    cout<<"Volume of cube is="<<vol(l,b,h)<<endl;
}
float vol(float l)
{
    return pow(l,3);
}
float vol(float r, float h)
{
    return (3.14*r*r*h);

}
float vol(float l,float b,float h)
{
    return (l*b*h);
}

