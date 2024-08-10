//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class Operation
{
	public:
	int num1,num2;
	Operation(int n1,int n2)
	{
		num1 = n1;
		num2 = n2;
		cout<<"\n Addition is :"<<num1+num2;
		cout<<"\n Subtraction is:"<<num1-num2;
		cout<<"\n Multiplication is:"<<num1*num2;

	}
};
int main()
{
	int num1,num2;
	cout<<"\nEnter Number:";
	cin>>num1;
	cout<<"\nEnter Number 2:";
	cin>>num2;
	Operation o1(num1,num2);
	return 0;
	
}
