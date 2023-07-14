#include<iostream>
using namespace std;
class Ajay
{
public:
    void dis()
    {
        cout<<"I'M FROM CLASS AJAY"<<endl;
    }
};
class A:virtual public Ajay
{

};
class B: virtual public Ajay
{

};
class D:public A, public B
{

};
int main()
{
    D d;
    d.dis();
       return 0;
}
