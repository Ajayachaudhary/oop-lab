#include<iostream>
using namespace std;
class Area
{
private:
    int l,b,area=0;
public:
    void get()
    {
        cout<<"Enter value in 'L' and 'B'."<<endl;
        cin>>l>>b;
    }
    void display()
    {
        cout<<"Area is:"<<(l*b)<<endl;
    }
};
class Volume
{
private:
    int l,b,h,vol=0;
public:
    void get()
    {
        cout<<"Enter value in 'L' ,'B' and 'H'."<<endl;
        cin>>l>>b>>h;
    }
    void display()
    {
        cout<<"Volume is:"<<(l*b*h)<<endl;
    }
};
class Box: public Area, public Volume
{

};
int main()
{
    Box b;
    //b.get();
    //b.display();
    //Solution is
   b.Area::get();
    b.Volume::get();
    b.Area::display();
    b.Volume::display();
    return 0;
}
