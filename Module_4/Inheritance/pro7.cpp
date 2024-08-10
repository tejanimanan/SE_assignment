//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance.
#include<iostream>
using namespace std;
class Perent
{
	public:
		int no1,no2;
		Perent()
		{
			no1= 10;
			no2 = 20;
			cout<<"\nPerent class constr";
		}
		
};
class Child :public Perent
{
	public:
		int sum;
		Child()
		{
			cout<<"\nChild class constr";
			sum = no1+no2;	
		}
};
class GrandChild :public Child
{
	public:
	GrandChild()
	{
		cout<<"\nGrandChild class constr";
		cout<<"\nSum is:"<<sum;
	}		
};
int main()
{
	GrandChild gc1;

}
