// Constructor overloding:-

#include <iostream>
using namespace std;

class sum
{
    int a, b;

public:
    sum()
    {
        // a=0;
        // b=0;
    }

    sum(int);

    sum(int, int);

    void disp()
    {
        cout << "Sum of " << a << " + " << b << " is " << a + b << endl;
    }
};

sum ::sum(int x)
{
    a = x;
    b = 0;
}
sum ::sum(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    sum s1;
    s1.disp();
    cout << endl;
    sum s2(10);
    s2.disp();
    cout << endl;
    sum s3(10, 20);
    s3.disp();

    return 0;
}