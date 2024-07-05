// Constructor:- 1) Default Constructor

#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(void);                 // Default constructor

    void disp()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(void)
{
    a = 10;
    b = 20;
}

int main()
{
    complex c1;                 // Object creation
    c1.disp();                  // Calling display function
    return 0;
}