// Inheritance :- single inheritance

#include <iostream>
using namespace std;

// class Employee
// {
//     public:
//     int id ;
//     float salary ;

//     Employee(){}

//     Employee(int eid)
//     {
//         id=eid;
//         salary=3500;
//     }
// };

// class programmer : public Employee
// {
//     public:
//     int languagecode;
//     programmer(int eid)
//     {
//         id=eid;
//         languagecode=9;
//     }
//     void getdata()
//     {
//         cout<<id<<endl;
//     }
// };
// int main(){
//     Employee harsh(56),rohan(57);
//     cout<<harsh.id<<endl;
//     cout<<harsh.salary<<endl;
//     cout<<rohan.id<<endl;
//     cout<<rohan.salary<<endl;

//     programmer skillf(10);
//     cout<<skillf.id<<endl;
//     cout<<skillf.languagecode<<endl;
//     skillf.getdata();

//     return 0;
// }


class Base
{
    int data1;
    public:
    int data2;

    void setdata();
    int getdata1();
    int getdata2();
};

void Base :: setdata(void)
{
    data1=10;
    data2=20;
}

int Base :: getdata1()
{
    return data1;
}

int Base :: getdata2()
{
    return data2;
}

class derived : public Base
{
    int data3;
    public:

    void process();
    void display();
};

void derived :: process()
{
    data3=data2*getdata1();
}
void derived :: display()
{
    cout<<"Valu of data1 is "<<getdata1()<<endl;
    cout<<"Valu of data2 is "<<data2<<endl;
    cout<<"Valu of data3 is "<<data3<<endl;
}

int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}