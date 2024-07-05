// Inheritance :-

#include <iostream>
using namespace std;

class Employee
{
    public:
    int id ;
    float salary ;

    Employee(){}

    Employee(int eid)
    {
        id=eid;
        salary=3500;
    }
};

class programmer : Employee
{
    public:
    int languagecode;
    programmer(int eid)
    {
        id=eid;
        languagecode=9;
    }
    void getdata()
    {
        cout<<id<<endl;
    }
};
int main(){
    Employee harsh(56),rohan(57);
    cout<<harsh.id<<endl;
    cout<<harsh.salary<<endl;
    cout<<rohan.id<<endl;
    cout<<rohan.salary<<endl;

    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();

    return 0;
}