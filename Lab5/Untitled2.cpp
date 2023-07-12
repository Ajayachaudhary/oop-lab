#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class DM;
class DB
{
private:
    int feet;
    float inch;
public:
    DB()
    {
        feet=inch=0;
    }
    DB(int f,float i)
    {
        feet=f;
        inch=i;
       // feet=feet+inch/12;
        //inch=fmod(inch,12);
    }
    void display()
        {
            cout << "Feet: " << feet << " Inch: " << inch << endl;
        }

    friend void add(DB &, DM &);
};
class DM
{
private:
    int meter;
    float centimeter;
public:
     DM()
    {
        meter=centimeter=0;
    }
    DM(int m,float c)
    {
        meter=m;
        centimeter=c;
        //meter=meter+centimeter/100;
        //centimeter=fmod(centimeter,100);
    }
    void display()
        {
            cout << "Meter: " << meter << " Centimeter: " << centimeter << endl;
        }

    friend void add(DB &, DM &);
};
void add(DB &f,DM &m)
{
    int x=m.meter;
    int y=f.feet;
    float c=m.centimeter;
    float i=f.inch;
    f.feet=f.feet+(m.meter/0.305);
    f.inch=f.inch+(m.centimeter/2.54);
    f.feet=f.feet+f.inch/12;
    f.inch=fmod(f.inch,12);

    m.meter=x+y*0.305;
    m.centimeter=m.centimeter+(i*2.54);
    m.meter=m.meter+m.centimeter/100;
    m.centimeter=fmod(m.centimeter,100);

}
int main()
{
    int m,f;
    float c,i;
    cout<<"Enter value in feet and inch::"<<endl;
    cin>>f>>i;
    cout<<"Enter value in meter and centimeter::"<<endl;
    cin>>m>>c;
    DB f1(f,i);
    DM m1(m,c);

    add(f1,m1);

    f1.display();
    m1.display();

    getch();
    return 0;
}
