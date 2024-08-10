#include<iostream>
using namespace std;
class Cal
{
	int num1,num2;
	char ch;
	public:
		void getdata()
		{
			cout<<"\nEnter Number1:";
			cin>>num1;
			cout<<"\nEnter Number2:";
			cin>>num2;
			cout<<"\nEnter Choice:";
			cin>>ch;
		}
		void calc()
		{
			switch(ch)
			{
				case '+':
				cout<<"\nSum is:"<<num1+num2;
				break;
		
				case '-':
				cout<<"\nsub is:"<<num1-num2;
				break;
				
				case '*':
				cout<<"\nmul is :"<<num1*num2;
				break;
				
				case '/':
				cout<<"\nDiv is:"<<num1/num2;
				break;
				
				default:
				cout<<"Enter valid ch";
			}
		}
};
int main()
{
	Cal c1;
	c1.getdata();
	c1.calc();
	return 0;
}
