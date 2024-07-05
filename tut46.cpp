// Virtual Function:-

#include <iostream>
using namespace std;
class Base
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Base Class" << endl;
        cout << "Displaying base class variable var_base " << var_base << endl;
    }
};
class Derived : public Base
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Derived Class" << endl;
        cout << "Displaying base class variable var_base " << var_base << endl;
        cout << "Displaying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}