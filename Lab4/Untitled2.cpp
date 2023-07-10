#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class animal
{
private:
    char name[50];
    int id;
    float price;
public:
    animal()
    {
        cout<<"default";
        strcpy(name,"dog");
        id=2;
        price=10001.50;
    }
    animal(char n[50],int i,float p)
    {
        cout<<"para";
        strcpy(name,n);
        id=i;
        price=p;
    }
    animal(animal &a)
    {
         cout<<"copy";
        strcpy(name,a.name);
        id=a.id;
        price=a.price;
    }
    ~animal()
    {
        cout<<endl<<"Destructor called.";
    }
    void display()
    {
        cout<<endl<<"Name::"<<name<<endl<<"ID::"<<id<<endl<<"Price::"<<price;
    }
};
int main()
{
    animal a;
    animal b("Cat",1,5000.50);
    animal c(a);
    a.display();
    b.display();
    c.display();
    return 0;
}
