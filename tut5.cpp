# include<iostream>
using namespace std;

int main()
{
    // use of continue
    for (int i = 0; i < 5; i++)
    {
        if (i==2)
        {
            continue;
        }
        cout<<i<<endl;
    }
    // output:-0 , 1 , 3 , 4 .

    cout<<endl;
    
    // use of break
    for (int i = 0; i < 5; i++)
    {
        if (i==2)
        {
            break;
        }
        cout<<i<<endl;
    }
    // output:-0 , 1 .
    return 0;
}