//Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length,width;
	public:
		void area(int l,int w)
		{
			length = l;
			width = w;
			cout<<"\nArea of rectangle is:"<<length*width; 
			cout<<"\nperimeter of rectangle is:"<<2*(length+width);
			
		}
	
		
};
int main()
{
	Rectangle r1;
	int l,b;
	cout<<"\nEnter Length:";
	cin>>l;
	cout<<"\nEnter width:";
	cin>>b;
	r1.area(l,b);
	return 0;
}
