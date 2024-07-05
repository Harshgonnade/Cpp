// Constructor with default argument

#include <iostream>
using namespace std;

class Simple
{
    int data1, data2;

public:
    Simple(int a, int b = 0)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << "The value of data is " << data1 << " and " << data2 << endl;
    }
};

int main()
{
    Simple s1(10, 29);
    s1.display();
    cout << endl;
    Simple s2(10);
    s2.display();

    return 0;
}