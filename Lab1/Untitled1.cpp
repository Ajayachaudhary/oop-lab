#include<iostream>
#include<math.h>
using namespace std;
float dist(float,float,float,float);
int main()
{
    float a,b,c,d,res;
    cin>>a>>b>>c>>d;
    res=dist(a,b,c,d);
    cout<<"distance between two points is"<<res;
    return 0;
}
float dist(float w,float x,float y,float z)
{
    float dis;
    dis=sqrt(pow((y-w),2)+pow((z-x),2));
    return dis;
}
