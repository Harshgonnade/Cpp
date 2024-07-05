// static data member

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

    public:
    void setdata(void)
    {
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }

    void getdata(void)
    {
        cout<<"The id of thid employee is "<<id<<" and this is employee no "<<count<<endl;
    }
};

int Employee :: count;

int main(){
    Employee Harsh,Ritesh;
    Harsh.setdata();
    Harsh.getdata();
    cout<<endl;
    Ritesh.setdata();
    Ritesh.getdata();

    return 0;
}