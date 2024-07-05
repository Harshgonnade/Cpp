// Array of object using pointer

#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3, p;
    float q;
    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout << "Item number: " << j + 1 << endl;
        ptrtemp->getData();
        ptrtemp++;
    }

    return 0;
}