// Day:-1
// Variable:- It is a containers to store the data or hold the data.
// Variables in C++ is a name given to a memory location. It is the basic unit of storage in a program. 
// Declaring a single variable :- Datatype variable_name;
// Declaring multiple variables:- Datatype variable1_name, variable2_name, variable3_name; 
// Datatype:- Type of data that can be stored in this variable. 
// Variable_name:- Name given to the variable. 
// Value:- It is the initial value stored in the variable. 
// this is declaration of variable a
    // int a;
   
// this is initialisation of a
    // a = 10;
   
// this is definition = declaration + initialisation
    // int b = 20;

# include<iostream>
using namespace std;

//int main()
//{
//cout<<"Hello sir \nMy Name Is Harsh Gonnade \nI Am From Nagpur,Maharashtra \nI Have Completed My BE In Mechanical Engineering From JIT College Of Engineering Nagpur";
//return 0;
//}


int main()
{
	int a=10;
	int b=20;
	int sum=a+b;
	int sub=a-b;
	int div=a/b;
	int mul=a*b;
	int rem=a%b;
	cout<<"Addition="<<sum<<endl;
	cout<<"Substraction="<<sub<<endl;
	cout<<"Division="<<div<<endl;
	cout<<"Mulltiplication="<<mul<<endl;
	cout<<"Reminder="<<rem<<endl;
	
	return 0;
	
}
