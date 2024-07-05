// Ambigutiy resolution in inheritance 

#include <iostream>
using namespace std;

// class Base1
// {
//     public:
//     void greet()
//     {
//         cout<<" Hello "<<endl;
//     }
// };
// class Base2
// {
//     public:
//     void greet()
//     {
//         cout<<" Welcome "<<endl;
//     }
// };
// class Derived : public Base1,public Base2
// {
//     int a;
//     public:
//     void greet()
//     {
//         Base1::greet();
//         Base2::greet();
//     }
// };

// int main()
// {
//     Derived d;
//     d.greet();    
//     return 0;
// }


// Virtual Base class 

class Student 
{
    protected:
    int roll_no;
    public:
    void set_roll_no(int a)
    {
        roll_no=a;
    }

    void print_no(void)
    {
        cout<<"Your roll number is "<<roll_no<<endl;
    }
};

class Test : virtual public Student
{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
    void print_marks(void)
    {
        cout<<"Your result is here :"<<endl
        <<"Maths:"<<maths<<endl
        <<"physics:"<<physics<<endl;
    }
};

class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout<<"Your PT score is "<<score<<endl;
    }
};

class Result :public Test,public Sports
{
    private:
    float total;
    public:
    void display(void)
    {
        total=maths+physics+score;
        print_no();
        print_marks();
        print_score();
        cout<<"Your total is "<<total<<endl;
    }
};

int main(){
    Result harsh;
    harsh.set_roll_no(56);
    harsh.set_marks(78.9,99.5);
    harsh.set_score(9);
    harsh.display();
    return 0;
}