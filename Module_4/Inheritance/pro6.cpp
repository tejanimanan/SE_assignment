//Write a C++ Program to show access to Private Public and Protected using Inheritance
#include<iostream>
using namespace std;
class Demo1
{
	private:
		string name;
	protected:
		int age;
	public:
		int rno;
		void setdata(string name,int age,int rno)
		{
			this->name = name;
			this->age = age;
			this->rno = rno;	
		}	
};
class Demo2:public Demo1
{
	public:
		void display()
		{
			//cout<<"Name is: "<<name; ---> private data member not access in other class
			cout<<"\nage is: "<<age;
			cout<<"\nRollno: "<<rno;
		}
};
int main()
{
	Demo2 d1;
	string name;
	int age,rno;
	cout<<"\nEnter name: ";
	cin>>name;
	cout<<"\nEnter age: ";
	cin>>age;
	cout<<"\nEnter Rollno: ";
	cin>>rno;
	d1.setdata(name,age,rno);
	d1.display();
	return 0;
}

