#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1);

    void getdata()
    {
        cout << "A " << a << endl;
        cout << "B " << b << endl;
        cout << "C " << c << endl;
        cout << "D " << d << endl;
        cout << "E " << e << endl;
    }
};

void Employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{

    Employee emp;
    emp.setdata(1, 2, 3);
    emp.getdata();

    return 0;
}