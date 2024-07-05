#include <iostream>
using namespace std;

// function example:-

// int sum(int a,int b);  // Function Prototype

// int main()
// {
//     int a=10,b=20;
//     cout<<"The sum is "<<sum(a,b);  // Function call
//     return 0;
// }

// int sum(int a,int b)   // Function Definition
// {
//     int sum=+a+b;
//     return sum;
// }

// ------------------------------------------------------------------------------------

// function call by value:-
// no value swaping take palce because copy of value is pass to function 
// and swaping value in function the value does not change in mai n function.

// int swap(int a,int b) 
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main()
// {
//     int a=10,b=20;
//     cout<<"The value of X"<<a<<endl;
//     cout<<"The value of Y"<<b<<endl;
//     swap(a,b);
//     cout<<"The value of X"<<a<<endl;
//     cout<<"The value of y"<<b<<endl;
//     return 0;
// }

// --------------------------------------------------------------------------------------

// function call by reference:-
//Both actual and formal parameters refer to the same location so any changes made inside 
//the function are reflected in the actual parameters of the caller.

// int swap(int &a,int &b) 
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main()
// {
//     int a=10,b=20;
//     cout<<"The value of X"<<a<<endl;
//     cout<<"The value of Y"<<b<<endl;
//     swap(a,b);
//     cout<<"The value of X"<<a<<endl;
//     cout<<"The value of y"<<b<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------

//Default Argument
// float moneyreceive(int currentmoney,float fac=1.04)
// {
//     return currentmoney*fac;
// }

// int main()
// {
//     int money=100000;
//     cout<<"If you have "<<money<<" Rs is your bank account,you will receive "<<moneyreceive(money)<<" Rs after 1year"<<endl;
//     cout<<"If you have "<<money<<" Rs is your bank account,you will receive "<<moneyreceive(money,1.1)<<" Rs after 1year"<<endl;

//     return 0;
// }

//--------------------------------------------------------------------------------

// find Factorial by Recurtion 
// int fact(int);

// int main()
// {
//     int a;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
//     cout<<"The factorial of "<<a<<" is "<<fact(a);
// }

// int fact(int a)
// {
//     if(a<=1)
//     {
//         return 1;
//     }
//     else{
//         return a*fact(a-1);
//     }
// }

//---------------------------------------------------------------------------

// find fibonacci series by using recurtion
int fibo(int);

int main() {
    int n;    // Set the value of n (number of terms in the series)
    cout<<"Enter the no of series you want"<<endl;
    cin>>n;
    cout << "Fibonacci Series:";
    for (int i = 0; i < n; ++i) 
    {
        cout << " " << fibo(i);
    }
    cout << endl;

    return 0;
}

int fibo(int n) {
    if (n <= 1)
    {
        return n;
    }
    else{
    return fibo(n - 1) + fibo(n - 2);
    }
}