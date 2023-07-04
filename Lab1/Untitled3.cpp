#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void dist(float,float,float,float);
int main()
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    dist(a,b,c,d);
    return 0;
}
void dist(float w,float x,float y,float z)
{
    float dis;
    dis=sqrt(pow((y-w),2)+pow((z-x),2));
    cout<<"distance between two points is"<<dis;
}
