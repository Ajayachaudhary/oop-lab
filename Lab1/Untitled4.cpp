#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void dist();
int main()
{
    dist();
    return 0;
}
void dist()
{
    float a,b,c,d,dis;
      cin>>a>>b>>c>>d;
    dis=sqrt(pow((c-a),2)+pow((d-b),2));
    cout<<"distance between two points is"<<dis;
}
