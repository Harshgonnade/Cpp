// Multiple inheritance 

#include <iostream>
using namespace std;

class Base1
{
    protected:
    int base1;
    public:
    void set_base1(int a)
    {
        base1=a;
    }
};

class Base2
{
    protected:
    int base2;
    public:
    void set_base2(int b)
    {
        base2=b;
    }
};

class Derived : public Base1,public Base2
{
    public:
    void show()
    {
        cout<<"The value of Base1 is "<<base1<<endl;
        cout<<"The value of Base2 is "<<base2<<endl;
        cout<<"The sum of Base1 & Base2 is "<<base1+base2<<endl;
    }
};

int main()
{
    Derived harsh;
    harsh.set_base1(25);    
    harsh.set_base2(25);
    harsh.show();

    return 0;
}