// Constructor in derived class:-

#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 constructor get called" << endl;
    }
    void print(void)
    {
        cout << "The value pf data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int b)
    {
        data2 = b;
        cout << "Base2 constructor get called" << endl;
    }
    void print(void)
    {
        cout << "The value pf data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class get called " << endl;
    }
    void printderived(void)
    {
        Base1::print();
        Base2::print();
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived harsh(1, 2, 3, 4);
    harsh.printderived();

    return 0;
}