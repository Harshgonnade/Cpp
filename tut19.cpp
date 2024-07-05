// Array of object:-

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 1200;
        cout << "Enter the id " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of thid employee is " << id << endl;
    }
};

int main()
{
    Employee Harsh, Ritesh;
    Harsh.setId();
    Harsh.getId();
    cout << endl;
    Ritesh.setId();
    Ritesh.getId();

    //    OR

    Employee emp[4];
    for (int i = 0; i < 4; i++)
    {
        emp[i].setId();
        emp[i].getId();
    }

    return 0;
}