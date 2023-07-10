#include<iostream>
#include<conio.h>
using namespace std;
class dist
{
private:
    int feet,inch;
public:
    void put()
    {
        cout<<"Enter the value of feet and inch:";
        cin>>feet>>inch;
    }
    void display()
    {
        cout<<endl;
        cout<<"Feet::"<<feet<<endl<<"Inch::"<<inch;
    }
    dist add(dist d)
    {
        dist temp;
        temp.feet=d.feet+feet;
        temp.inch=d.inch+inch;
        temp.feet=temp.feet+temp.inch/12;
        temp.inch=temp.inch%12;
        return temp;
    }
    void add(dist d1,dist d2)
    {
        feet=d1.feet+d2.feet;
        inch=d1.inch+d2.inch;
        feet=feet+inch/12;
        inch=inch%12;
    }
};
int main()
{
    dist d1,d2,d3,d4;
    d1.put();
    d2.put();
    d3=d1.add(d2);
    d4.add(d1,d2);
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}
