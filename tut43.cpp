// Polymorphism:- The words polymorphism means having many forms.
// In simple words we can define polymorphism as the ability of a
// message to be displayed in more than one form.

#include <iostream>
using namespace std;

class Base
{
public:
    int var_Base;
    void display()
    {
        cout << "Base Class" << endl;
        cout << "Displaying base class variable var_base " << var_Base << endl;
    }
};

class Derived : public Base
{
public:
    int var_Derived;
    void display()
    {
        cout << "Derived Class" << endl;
        cout << "Displaying base class variable var_base " << var_Base << endl;
        cout << "Displaying derived class variable var_derived " << var_Derived << endl;
    }
};

int main()
{
    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class
    base_class_pointer->var_Base = 34;
    base_class_pointer->display();
    cout << endl;
    Derived *derived_class_pointer;
    derived_class_pointer = &obj_derived; // pointing derived class pointer to derived class
    derived_class_pointer->var_Derived = 90;
    derived_class_pointer->display();

    return 0;
}