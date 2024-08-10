//8. Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading
#include<iostream>
using namespace std;
class Cal
{
	public:
		void calc(int a,int b)
		{
			cout<<"\n Addition is : "<<a+b;
		}
		void calc(float a,float b)
		{
			cout<<"\n division is : "<<a/b;
		}
		void calc(int a,long b)
		{
			cout<<"\n Multiplication is : "<<a*b;
		}
			void calc(double a,int b)
		{
			cout<<"\n subtraction is : "<<a-b;
		}
};
int main()
{
	Cal t1;
	int a,b,q,x;
	double p;
	long y;
	float m,n;
	cout<<"\nEnter no1 :";
	cin>>a;
	cout<<"\nEnter no2 :";
	cin>>b;
	p=a;
	q=b;
	x=a;
	y=b;
	m=a;
	n=b;
	t1.calc(a,b);
	t1.calc(p,q);
	t1.calc(m,n);
	t1.calc(x,y);
	
}

