#include<iostream>
#include<conio.h>
using namespace std;
void price(int,int=120);
int main()
{
    int a,p;
    char x;
    cout<<"Do you know the price of item?Press 'y' and 'n'."<<endl;
    cin>>x;
    if(x=='y'||x=='Y')
    {
        cout<<"Enter the price of item=";
        cin>>p;
        cout<<"Enter the quantity of item=";
        cin>>a;
        price(a,p);
    }
    else
    {
         cout<<"Enter the quantity of item=";
        cin>>a;
        price(a);
    }
    return 0;
}
void price(int n, int p)
{
    cout<<"Total price of item is="<<(n*p);
}

