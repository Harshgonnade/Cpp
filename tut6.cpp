#include <iostream>
using namespace std;

int main()
{
    // Array initialization 

    // 1) 1D array
    // int arr[]={1,2,3,4,5};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"The value of array "<<i<<" is "<<arr[i]<<endl;
    // }
    // cout<<endl;

    // 2) 2D array
    // int arr1[2][2]={{1,2},{3,4}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<arr1[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    
    // 3) 3D array
    // int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr2[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }

    // Using pointer
    // An array of 5 elements
    int age[5]={18,19,20,21,22};
    int *p;
    p = age;
    
    // output array value 
    cout<<"Using pointer: "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"*(p + "<<i<<") : ";
        cout<<*(p + i)<<endl;
    }

    cout<<"Using age as address: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"*(age + "<<i<<") : ";
        cout<<*(age+i)<<endl;
    }
    
    return 0;
}