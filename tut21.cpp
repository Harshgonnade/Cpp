// Friend Function:-

#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumcomplex(Complex o1, Complex o2);
public:
void setnumber(int n1,int n2)
{
    a = n1;
    b = n2;
}

void printnumber()
{
    cout<<"Your number "<<a<<" + "<<b<<"i"<<endl;
}

};

Complex sumcomplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    Complex c1,c2,sum;
    c1.setnumber(5,3);
    c1.printnumber();

    c2.setnumber(6,5);
    c2.printnumber();

    sum=sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
}