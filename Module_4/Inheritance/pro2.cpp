//Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class Rectangle 
{
	public:
		void area();
};
class Area:public Rectangle
{
	public:
		void area(int l,int w)
		{
			cout<<"\nArea of Rectangle:"<<l*w;
		}
};
int main()
{
	Area a1;
	int l,w;
	cout<<"\nEnter Length:";
	cin>>l;
	cout<<"\nEnter width:";
	cin>>w;
	a1.area(l,w);
}
