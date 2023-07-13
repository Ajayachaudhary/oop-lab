#include<iostream>
#include<conio.h>
using namespace std;
class tola
{
    private:
        int tol;
    public:
        tola()
        {
            tol=0;
        }
        tola(int t)
        {
            tol=t;
        }
        void display()
        {
            cout<<"TOla="<<tol<<endl;
        }
        int atola()
        {
            return tol;
        }
};
class gram
{
    private:
        float grm;
    public:
       gram()
       {
           grm=0;
       }
       gram(float g)
       {
           grm=g;
       }
       gram(tola t)
       {
           grm=11.66*t.atola();
       }
       void display()
       {
           cout<<"Gram="<<grm<<endl;
       }
};
int main()
{
    int i;
    cout<<"Enter value in tola=";
    cin>>i;
    tola t(i);
    gram g;
    g=t;
    t.display();
    g.display();
    return 0;
}
