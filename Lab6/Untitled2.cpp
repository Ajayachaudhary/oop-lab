
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class dist
{
private:
    int meter;
    float centimeter;
public:
    dist()
    {
        meter=centimeter=0;
    }
    dist(int f, float i)
    {
        meter=f;
        centimeter=i;
        if(centimeter>100)
        {
            meter+=centimeter/100;
            centimeter=fmod(centimeter,100);
        }
    }
    int operator >(dist d)
    {
        if(meter>d.meter ||(meter==d.meter && centimeter>d.centimeter))
        {
                return 1;
        }
            else
            {
                return 0;
            }
    }
    int operator <(dist d1)
    {
         if(meter<d1.meter ||(meter==d1.meter && centimeter<d1.centimeter))
        {
                return 1;
        }
            else
            {
                return 0;
            }
    }
    int operator ==(dist d2)
    {
        if(meter==d2.meter&&centimeter==d2.centimeter)
        {
             return 1;
        }
        else
        {
            return 0;
        }
    }
    void display()
    {
        cout<<meter<<"M  "<<centimeter<<"CM";
    }
};
int main()
{
    dist res;
    int a,x;float b,y;
    cout<<"Enter the value in meter and centimeter::"<<endl;
    cin>>a>>b;
    cout<<"Enter the value in meter and centimeter::"<<endl;
    cin>>x>>y;
    dist d1(a,b);
    dist d2(x,y);
    if(d1>d2)
    {
        d1.display();
        cout<<" is greater than ";
        d2.display();
    }
    if(d1<d2)
    {
        d1.display();
        cout<<" is smaller than ";
        d2.display();
    }
    if(d1==d2)
    {
        d1.display();
        cout<<" is equal to ";
        d2.display();
    }
    return 0;
}
