#include <iostream>
using namespace std;

int main(){
    int var =10;
    int *ptr=&var;
    int **ptr1=&ptr;

    cout<<"value of var is "<<var<<endl;
    cout<<"Address of var is "<<&var<<endl;
    cout<<"Address of var is "<<ptr<<endl;
    cout<<"value of var is "<<*ptr<<endl;
    cout<<"value of var is "<<**ptr1<<endl;
    cout<<"Address of ptr is "<<ptr1<<endl;
    return 0;
}