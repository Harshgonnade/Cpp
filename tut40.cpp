#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
{
    // complex c1;
    // complex *ptr = &c1;
    // (*ptr).setdata(1, 4);
    // (*ptr).getdata();
    // //         OR
    // cout<<endl;

    // complex *ptr1 = new complex;
    // (*ptr1).setdata(4, 5);
    // (*ptr1).getdata();
    // cout<<endl;

    // complex *ptr2 = new complex;
    // ptr2->setdata(5, 9);
    // ptr2->getdata();
    // cout<<endl;

    complex *ptr3 = new complex[4];
    ptr3->setdata(9, 12);
    ptr3->getdata();

    return 0;
}