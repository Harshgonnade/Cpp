#include <iostream>
using namespace std;

union money
{
    // pick greater variable size fixed for all
    // like 4 bytes.
    int rice;
    char car;
    float pound;
};

int main(){
    
    union money m1;
    m1.rice=55;
    cout<<"Value of rice is "<<m1.rice<<endl;
// using one variable at a time 
    m1.car='c';
    cout<<"Va;ue of Rice is "<<m1.rice<<endl;
    return 0;
}