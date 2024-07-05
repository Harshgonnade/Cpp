# include<iostream>
using namespace std;

int main()
{
    // if else
    // int age;
    // cout<<"Enter your age"<<endl;
    // cin>>age;

    // if(age>=18)
    // {
    //     cout<<"You are apply for this job"<<endl;
    // }
    // else
    // {
    //     cout<<"you are not apply for this job"<<endl;
    // }
    
    // nested if else
    int num1,num2,num3;
    cout<<"Enter three numbers"<<endl;
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
    {
        cout<<"A is greater ";
    }
    else if (num2>num3)
    {
        cout<<"B is greater ";
    }
    else
    {
        cout<<"c is greater ";
    }
    


    return 0;
}