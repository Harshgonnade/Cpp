// Initialization list in constructors 

#include <iostream>
using namespace std;

class Test{
    int a,b;
    public:
    Test(int i, int j):a(i),b(j)
    {
        cout<<"Constructor get called"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main()
{
    Test t(5,4);    
    return 0;
}