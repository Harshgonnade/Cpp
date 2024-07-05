// Revisiting pointer by using new and delete keyword or operater.

#include <iostream>
using namespace std;

int main()
{
    // Basic Example:-
    int a=4;
    int *ptr=&a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // new keyword / operater:-
    int *p=new int(40);
    cout<<"The value at address p is "<<*(p)<<endl;

    // Create dynamic memory by using new
    int *arr = new int[3];
    *(arr)=10;
    *(arr+1)=20;
    *(arr+2)=30;

    cout<<"The value of arr[0] is "<<*(arr)<<endl;
    cout<<"The value of arr[1] is "<<*(arr+1)<<endl;
    cout<<"The value of arr[2] is "<<*(arr+2)<<endl;

    // delete keyword / operater
      int *arrs = new int[3];
    *(arrs)=10;
    *(arrs+1)=20;
    *(arrs+2)=30;
    // delete arrs;
    //     or
    delete []arrs;
    cout<<"The value of arr[0] is "<<*(arrs)<<endl;
    cout<<"The value of arr[1] is "<<*(arrs+1)<<endl;
    cout<<"The value of arr[2] is "<<*(arrs+2)<<endl;
    
    return 0;
}