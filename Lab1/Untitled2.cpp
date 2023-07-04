#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
float dist();
int main()
{
    float res;
    res=dist();
    cout<<"distance between two points is"<<res;
    return 0;
}
float dist()
{
    float a,b,c,d,dis;
      cin>>a>>b>>c>>d;
    dis=sqrt(pow((c-a),2)+pow((d-b),2));
    return dis;
}
