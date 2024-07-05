// Constructor:- 2) Parametrized Constructor

// Ex:1

// #include <iostream>
// using namespace std;

// class sum
// {
// private:
//     int a, b;

// public:
//     sum(int, int);            // parametrized constructor decleration 

//     void getsum()
//     {
//         cout<<"Sum of "<<a<<" + "<<b<<" is "<<a+b<<endl;
//     }
// };

// sum :: sum(int x,int y)       // parametrized constructor definition
// {
//     a=x;
//     b=y;
// }
// main()
// {
//     sum s1(10,20);         // Implicit call 
//     s1.getsum();

//     sum s2=sum(5,5);      // Explicit call
//     s2.getsum();

//     return 0;
// }


// Ex:-2

#include <iostream>
using namespace std;

class point
{
private:
    int x,y;
public:
 point(int a,int b)
 {
    x=a;
    y=b;
 }

    void display()
    {
        cout<<"The cordinates point is ("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    point p1(0,1);
    p1.display();

    point p2(5,6);
    p2.display();
    return 0;
}