#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initcounter(void){counter=0;}
    void setprice(void);
    void displayprice(void);

};

void shop :: setprice(void)
{
    cout<<"Enter id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main(){
    shop s;
    s.initcounter();
    s.setprice();
    s.setprice();
    s.setprice();
    s.displayprice();
        
    return 0;
}