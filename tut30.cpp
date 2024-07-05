// Constructer:- 3) Copy constructor 

#include <iostream>
using namespace std;

// Ex:1

// class Number 
// {
//     int a;
//     public:
//     Number()
//     {
//         a=0;
//     }

//     Number(int num)
//     {
//         a=num;
//     }

//     Number(Number &obj)
//     {
//         a=obj.a;
//     }

//     void display()
//     {
//         cout<<"The number for this object is "<<a<<endl;
//     }
// };

// int main()
// {
//     Number x,y,z(45);
//     x.display();
//     y.display();
//     z.display();

//     Number z1(x);
//     z1.display();   
     
//     Number z2(z);
//     z2.display();   

//     return 0;
// }


// Ex:-2

class Sumoftwo
{
    int a,b;
    public:
    Sumoftwo()
    {
        a=0;
        b=0;
    }
    Sumoftwo(int x,int y)
    {
        a=x;
        b=y;
    }
    Sumoftwo(Sumoftwo &obj)
    {
        cout<<"copy constructor called"<<endl;
        a=obj.a;
        b=obj.b;
    }
    void display()
    {
        cout<<"sum of "<<a<<" + "<<b<<" is "<<a+b<<endl;
    }
};

int main()
{
    Sumoftwo s1,s2(10,20);
    s1.display();
    s2.display();

    Sumoftwo s3(s2);        // copy constructor get invoked
    s3.display();

    return 0;
}