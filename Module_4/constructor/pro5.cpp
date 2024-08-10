//Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene
#include<iostream>
using namespace std;
class Triangle 
{
	private:
		int l1,l2,l3;
	public:
		void setdata(int l1,int l2,int l3)
		{
			this->l1 = l1;
			this->l2 = l2;
			this->l3 = l3;
		}
		void findtri()
		{
			 

    		// Check triangle type
    		if (l1 == l2 && l2 == l3) //all side are same
			{
        		cout << "Equilateral triangle" << endl;
    		} 
			else if (l1 == l2 || l1 == l3 || l2 == l3) //any two side are eual
			{
        		cout << "Isosceles triangle" << endl;
    		} 
			else //all side are diffrent
			{
        		cout << "Scalene triangle" << endl;
    		}
		}
		
};
int main()
{
	Triangle t1;
	int l1,l2,l3;
	cout<<"Enter 1 Side value:";
	cin>>l1;
	cout<<"Enter 2 Side value:";
	cin>>l2;
	cout<<"Enter 3 Side value:";
	cin>>l3;
	t1.setdata(l1,l2,l3);
	t1.findtri();
}
