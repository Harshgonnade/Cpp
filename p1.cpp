#include <iostream>
using namespace std;
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    int subarraySum(int arr[], int n, long long s)
    {
        int sum=0;
        for(int i=3;i<=5;i++)
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
};

int main()
{
    int n=5;
    long long s=12;
    int arr[]={1,2,3,7,5};
    Solution a;
    a.subarraySum(arr,n,s);
    
}