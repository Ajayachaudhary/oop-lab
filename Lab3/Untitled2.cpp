#include<iostream>
#include<conio.h>
using namespace std;

namespace Ajay
{

    void display()
    {
    cout<<"Hello i'm Ajay from inside of namespace."<<endl;
    }
}
namespace Ram
{
    void display()
    {
         Ajay::display();
        cout<<"Hello i'm Ram from inside of namespace. "<<endl;
    }
}
int main()
{

    Ram::display();
    return 0;
}
