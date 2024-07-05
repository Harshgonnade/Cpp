# include<iostream>
using namespace std;

int main()
{
    // Switch case
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are apply for this job";
        break;
    
    default:
        cout<<"You are not apply for this job";
        break;
    }
    return 0;
}