//Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference
#include<iostream>
using namespace std;
class Circle
{
	private:
		int	radius;
	public:
		void area(int r)
		{
			radius = r;
			cout<<"Area of circle is:"<<3.14*(radius*radius)<<endl;
		}
};
int main()
{
	int r;
	cout<<"\nEnter radius:";
	cin>>r;
	Circle c1;
	c1.area(r);
	return 0;
}
