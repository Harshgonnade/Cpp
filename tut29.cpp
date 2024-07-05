// Dynamic Initialization Of Object Using Constructor

#include <iostream>
using namespace std;

class BankDeposit
{
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public:
    BankDeposit() {}

    BankDeposit(int p, int y, float r);

    BankDeposit(int p, int y, int R);

    void shoe();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestrate = r;
    returnvalue = principle;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int R)
{
    principle = p;
    years = y;
    interestrate = float(R)/100;
    returnvalue = principle;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void BankDeposit :: shoe()
{
    cout<<"principle amount was "<<principle<<" return value after "<<years<<" years is "<<returnvalue<<endl;
}
int main()
{
    BankDeposit b1,b2,b3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p,y and r "<<endl;
    cin>>p>>y>>r;
    b1=BankDeposit(p,y,r);
    b1.shoe();
    cout<<endl;
    cout<<"Enter the value of p,y and R "<<endl;
    cin>>p>>y>>R;
    b1=BankDeposit(p,y,R);
    b1.shoe();

    return 0;
}