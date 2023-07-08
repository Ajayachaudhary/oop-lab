#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    float *ptr,avg=0;
    cout<<"Enter how many number do you want=";
    cin>>n;
    ptr=new float[n];
    cout<<"Enter the value of number::"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    for(i=0;i<n;i++)
    {
        avg=avg+ptr[i];
    }
    cout<<"The average value is="<<avg/n;
    delete []ptr;
    return 0;
}
