// multilevel inheritance

#include <iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    public:
    void set_roll_no(int);
    void get_roll_no(void);

};

void student :: set_roll_no(int r)
{
    roll_no=r;
}
void student :: get_roll_no()
{
    cout<<"The roll number is "<<roll_no<<endl;
}

class Exam : public student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};

void Exam :: set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;

}
void Exam :: get_marks()
{
    cout<<"The marks obtaind in maths are "<<maths<<endl;
    cout<<"The marks obtaind in phyhics are "<<physics<<endl;
}

class Result : public Exam
{
    float percentage;
    public:
    void display()
    {
        get_roll_no();
        get_marks();
        cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main()
{
    Result harsh;
    harsh.set_roll_no(56);
    harsh.set_marks(95,99);
    harsh.display();
       
    return 0;
}