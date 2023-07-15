#include<iostream>
using namespace std;
template <class T>
void absolute(T a)
{
    if(a>0)
    {
        cout<<"Absolute value is:"<<a<<endl;
    }
    else
    {
        cout<<"Absolute value is:"<<a*(-1)<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter integer number:"<<endl;
    cin>>a;
    absolute(a);
    float b;
    cout<<"Enter float number;"<<endl;
    cin>>b;
    absolute(b);
    return 0;
}
