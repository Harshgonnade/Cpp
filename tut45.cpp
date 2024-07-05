// Operater overloading example 2:-

#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number() {}

    Number(int num = 0)
    {
        this->num = num;
    }

    Number operator+(const Number &obj)
    {
        return Number(num + obj.num);
    }

    Number operator-(const Number &obj)
    {
        return Number(num - obj.num);
    }

    Number &operator++()
    {
        ++num;
        return *this;
    }

    Number operator++(int)
    {
        return Number(num++);
    }

    void display()
    {
        cout << "Number :" << num << endl;
    }
};

int main()
{
    Number a = 10;
    a.display();

    Number b = 20;
    b.display();

    Number c = a + b;
    c.display();

    Number d = c - a;
    d.display();

    Number e = ++a;
    e.display();

    Number f = a++;
    f.display();

    return 0;
}