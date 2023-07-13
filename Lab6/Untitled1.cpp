#include<iostream>
#include<conio.h>
using namespace std;
class time
{
   private:
        int hrs,mint,sec;
   public:
    time()
    {
        hrs=mint=sec=0;
    }
    time(int h,int m,int s)
    {
        hrs=h;
        mint=m;
        sec=s;
    }
    void conv(time x)
    {
        hrs=x.hrs;
        mint=x.mint;
        sec=x.sec;
        while(sec>=60)
        {
           mint=mint+sec/60;
            sec=sec%60;
        }
        while(mint>=60)
        {
            mint=mint/60;
            hrs++;
            mint=mint%60;
        }
    }
    void display()
    {
        cout<<endl<<"Hours="<<hrs<<"  "<<"Minute="<<"  "<<mint<<"  "<<"Second="<<sec;
    }
    time operator ++()
    {
        return time(++hrs,++mint,++sec);
    }
    time operator ++(int)
    {
        return time(hrs++,mint++,sec++);
    }
     time operator --(int)
    {
        return time(hrs--,mint--,sec--);
    }
    time operator --()
    {
        return time(--hrs,--mint,--sec);
    }
};
int main()
{

    int h,m,s;
    cout<<"Enter the hour, minute and second:"<<endl;
    cin>>h>>m>>s;
    time t(h,m,s),t3,t4,t5,t6;
    t3= ++t;
    t.display();
    t3.display();
    time t1;
    t1.conv(t);
    t1.display();
    t4= t++;
    t.display();
    t4.display();
    time t2;
    t2.conv(t);
    t2.display();
    t5= --t;
    t.display();
    t5.display();
    t6=t--;
    t.display();
    t6.display();
    return 0;
}
