//Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person
{
	private:
		string name,country;
		int age;
	public:
		void setdata(string name,string country,int age)
		{
			this->name = name;
			this->country = country;
			this->age = age;
		}
		void getdata()
		{
			cout<<"\nName is :"<<name;
			cout<<"\nCountry is :"<<country;
			cout<<"\nAge is:"<<age;
		}
};
int main()
{
	Person p1;
	string name,country;
	int age;
	cout<<"\nEnter Name:";
	cin>>name;
	cout<<"\nEnter Country:";
	cin>>country;
	cout<<"\nEnter age:";
	cin>>age;
	p1.setdata(name,country,age);
	p1.getdata();
}
