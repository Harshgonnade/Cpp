#include <iostream>
using namespace std;

int main(){
    
    int arr[]={1,2,3,4,5};
    int *ptr=arr;

    cout<<"The value of arr[0] is "<<*ptr<<endl;
    cout<<"The value of arr[1] is "<<*(ptr+1)<<endl;
    cout<<"The value of arr[2] is "<<*(ptr+2)<<endl;
    cout<<"The value of arr[3] is "<<*(ptr+3)<<endl;
    cout<<"The value of arr[4] is "<<*(ptr+4)<<endl;

    return 0;
}