// Desteructor :-

#include <iostream>
using namespace std;

int count=0;

class num
{
    public:
    num()
    {
        count ++;
        cout<<"This is the time when constructor is called for object number"<<count<<endl;
    }

    ~num()
    {
        cout<<"This is the time when my destructor is called for object number"<<count<<endl;
        count --;
    }
};

int main()
{
    cout<<"We are inside our main function"<<endl;

    num n1;
    {
        cout<<"Enter in side the block"<<endl;
        num n2,n3;
        
        cout<<endl;
    }    
    cout<<"Out from the block"<<endl;
    return 0;
}