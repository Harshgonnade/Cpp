#include <iostream>
using namespace std;

// without Typedef
// struct Employee
// {
//     int eid;
//     char gender;
//     float salary;
// };

// int main()
// {
//     struct Employee harsh;
//     harsh.eid=21;
//     harsh.gender='M';
//     harsh.salary=1200000;
//     cout<<"The employee eid is "<<harsh.eid<<endl;
//     cout<<"The employee gender is "<<harsh.gender<<endl;
//     cout<<"The employee salary is "<<harsh.salary<<endl;
//     return 0;
// }

// with Typedef
typedef struct Employee
{
    int eid;
    char gender;
    float salary;
}em;

int main()
{
    em harsh;
    harsh.eid=21;
    harsh.gender='M';
    harsh.salary=1200000;
    cout<<"The employee eid is "<<harsh.eid<<endl;
    cout<<"The employee gender is "<<harsh.gender<<endl;
    cout<<"The employee salary is "<<harsh.salary<<endl;
    return 0;
}