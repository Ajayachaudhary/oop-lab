#include<iostream>
using namespace std;
template <class T>
class arra
{
    private: T arr[50];
    public:
        void get(int );
        T maxi(int);
        T mini(int);
};
template <class T>
void arra<T>::get(int a)
{
    for(int i=0;i<a;i++)
    {
        cout<<"Enter numbers:"<<endl;
        cin>>arr[i];
    }
}
template <class T>
T arra<T>::maxi(int a)
{
    T m=arr[0];
    for(int i=1;i<a;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    return m;
}
template <class T>
T arra<T>::mini(int a)
{
    T m=arr[0];
    for(int i=1;i<a;i++)
    {
        if(arr[i]<m)
        {
            m=arr[i];
        }
    }
    return m;
}
int main()
{
    int a;
    cout<<"Enter how many numbers:"<<endl;
    cin>>a;
    arra<int>a1;
    a1.get(a);
    cout<<"Maximum number is:"<<a1.maxi(a)<<endl;
    cout<<"Minimum number is:"<<a1.mini(a)<<endl;
    arra<float>a2;
    a2.get(a);
    cout<<"Maximum number is:"<<a2.maxi(a)<<endl;
    cout<<"Minimum number is:"<<a2.mini(a)<<endl;
    return 0;
}
