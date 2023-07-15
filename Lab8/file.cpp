#include<iostream>
#include<fstream>
using namespace std;
class student
{
private:
    char name[50];
    int roll;
public:
    void get();
    void show();
    void read1();
    void write1();
};
void student::get()
{
    cout<<"Enter student name:"<<endl;
    cin>>name;
    cout<<"Enter roll number:"<<endl;
    cin>>roll;
}
void student::write1()
{
    ofstream file1;
    file1.open("student1.txt",ios::app|ios::binary);
    get();
    file1.write(reinterpret_cast<char *>(this),sizeof(*this));
}
void student::read1()
{
    ifstream file1("student1.txt",ios::binary);
    while(!file1.eof())
    {
       if( file1.read(reinterpret_cast<char*>(this),sizeof(*this)) )
            show();
    }
}
void student::show()
{
    cout<<"Name is:"<<name<<endl;
    cout<<"ROll no is:"<<roll<<endl;
}
int main()
{
    student s;
    s.write1();
    s.read1();
}
